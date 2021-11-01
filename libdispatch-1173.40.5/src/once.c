/*
 * Copyright (c) 2008-2013 Apple Inc. All rights reserved.
 *
 * @APPLE_APACHE_LICENSE_HEADER_START@
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @APPLE_APACHE_LICENSE_HEADER_END@
 */

#include "internal.h"

#undef dispatch_once
#undef dispatch_once_f


#ifdef __BLOCKS__
void
// 1. 我们的应用程序调用的入口
dispatch_once(dispatch_once_t *val, dispatch_block_t block)
{
	// 2. 内部逻辑
	dispatch_once_f(val, block, _dispatch_Block_invoke(block));
}
#endif
/// 核心代码
DISPATCH_NOINLINE void dispatch_once_f(dispatch_once_t *val, void *ctxt, dispatch_function_t func)
{
	// 3.将val，也就是静态变量转换为dispatch_once_gate_t类型的变量l
	dispatch_once_gate_t l = (dispatch_once_gate_t)val;
	// 4.os_atomic_load将 &l->dgo_once 地址存储的值加载到变量v中
	uintptr_t v = os_atomic_load(&l->dgo_once, acquire);
	if (likely(v == -1)) {
		// 已经执行过一次了 无需再次执行
		return;
	}
	if (_dispatch_once_gate_tryenter(l)) {
		// 执行block代码 - 广播
		return _dispatch_once_callout(l, ctxt, func);
	}
	
	/// 多线程调用访问单例 线程1访问时 block没有执行过 则去执行block. 同时线程2页访问了单例, 但是由于线程1没有完成广播, once的值不为0也不为1, 会进入等待逻辑
	return _dispatch_once_wait(l);
}

DISPATCH_NOINLINE /// 强制不内联函数
static void _dispatch_once_callout(dispatch_once_gate_t l, void *ctxt,
		dispatch_function_t func)
{
	_dispatch_client_callout(ctxt, func); // block调用执行
	_dispatch_once_gate_broadcast(l); // 进行广播：告诉别人有了归属，不要找我了
}

void _dispatch_client_callout(void *ctxt, dispatch_function_t f)
{
	@try {
		return _dispatch_Block_invoke(ctxt);
	}
	@catch (...) {
		objc_terminate();
	}
}

DISPATCH_ALWAYS_INLINE
static inline void
_dispatch_once_gate_broadcast(dispatch_once_gate_t l)
{
	dispatch_lock value_self = _dispatch_lock_value_for_self();
	uintptr_t v = _dispatch_once_mark_done(l);
	if (likely((dispatch_lock)v == value_self)) return;
	/// 如果进入这里 表示有多线程访问了
	_dispatch_gate_broadcast_slow(&l->dgo_gate, (dispatch_lock)v);
}

// 将DLOCK_ONCE_DONE赋值给dgo->dgo_once，并返回dgo->dgo_once原值（被赋值前的值 之前的值不就是_dispatch_lock_value_for_self）
static inline uintptr_t _dispatch_once_mark_done(dispatch_once_gate_t dgo)
{
	return os_atomic_xchg(&dgo->dgo_once, DLOCK_ONCE_DONE, release);
}





// --------
/*
 if (os_atomic_cmpxchg(vval, NULL, tail, acquire)) { // *vval 是否等于NULL? 是，则返回true，并将*vval置为tail。如果不是，返回false（第一次进入，*vval == NULL, 之后又其他线程进入，则进入else分支） 如果之后在没有其他线程进入，则val的值一直会保持tail
 原文链接：https://blog.csdn.net/u013378438/article/details/81076116
 */
#define DLOCK_ONCE_UNLOCKED	((uintptr_t)0)
#define DLOCK_ONCE_DONE		(~(uintptr_t)0)
static inline bool _dispatch_once_gate_tryenter(dispatch_once_gate_t l)
{
	/*
	 1.l->dgo_once与DLOCK_ONCE_UNLOCKED相等，那么将_dispatch_lock_value_for_self()赋值给l->dgo_once，并返回true；

	 l->dgo_once与DLOCK_ONCE_UNLOCKED不等，那么将DLOCK_ONCE_UNLOCKED赋值给l->dgo_once，并返回false
	 链接：https://www.jianshu.com/p/b25535a7403e
	 */
	return os_atomic_cmpxchg(&l->dgo_once, DLOCK_ONCE_UNLOCKED,
			(uintptr_t)_dispatch_lock_value_for_self(), relaxed);
}

/// 等待方法
void
_dispatch_once_wait(dispatch_once_gate_t dgo)
{
	dispatch_lock self = _dispatch_lock_value_for_self();
	uintptr_t old_v, new_v;
	dispatch_lock *lock = &dgo->dgo_gate.dgl_lock;
	uint32_t timeout = 1;
/// for(;;)相当于是一个while(true) 但是效率会改一点
	for (;;) {
		/*
		 os_atomic_rmw_loop用于从操作系统底层获取状态，使用 os_atomic_rmw_loop_give_up 来执行返回操作。即不停查询 &dgo->dgo_once 的值，若变为DLOCK_ONCE_DONE，则调用 os_atomic_rmw_loop_give_up(return); 退出等待。
		 */
		os_atomic_rmw_loop(&dgo->dgo_once, old_v, new_v, relaxed, {
			if (likely(old_v == DLOCK_ONCE_DONE)) {
				os_atomic_rmw_loop_give_up(return);
			}
#if DISPATCH_ONCE_USE_QUIESCENT_COUNTER
			if (DISPATCH_ONCE_IS_GEN(old_v)) {
				os_atomic_rmw_loop_give_up({
					os_atomic_thread_fence(acquire);
					return _dispatch_once_mark_done_if_quiesced(dgo, old_v);
				});
			}
#endif
			new_v = old_v | (uintptr_t)DLOCK_WAITERS_BIT;
			if (new_v == old_v) os_atomic_rmw_loop_give_up(break);
		});
		if (unlikely(_dispatch_lock_is_locked_by((dispatch_lock)old_v, self))) {
			DISPATCH_CLIENT_CRASH(0, "trying to lock recursively");
		}
#if HAVE_UL_UNFAIR_LOCK
		_dispatch_unfair_lock_wait(lock, (dispatch_lock)new_v, 0,
				DLOCK_LOCK_NONE);
#elif HAVE_FUTEX
		_dispatch_futex_wait(lock, (dispatch_lock)new_v, NULL,
				FUTEX_PRIVATE_FLAG);
#else
		_dispatch_thread_switch(new_v, flags, timeout++);
#endif
		(void)timeout;
	}
}
