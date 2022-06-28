/*
 * Copyright (c) 2010-2011 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _OBJC_WEAK_H_
#define _OBJC_WEAK_H_

#include <objc/objc.h>
#include "objc-config.h"

__BEGIN_DECLS

/*
The weak table is a hash table governed by a single spin lock.                   /// 弱引用表本质是一个哈希表格,且被一个自旋锁控制
An allocated blob of memory, most often an object, but under GC any such         ///
allocation, may have its address stored in a __weak marked storage location 
through use of compiler generated write-barriers or hand coded uses of the 
register weak primitive. Associated with the registration can be a callback 
block for the case when one of the allocated chunks of memory is reclaimed. 
The table is hashed on the address of the allocated memory.  When __weak 
marked memory changes its reference, we count on the fact that we can still 
see its previous reference. /// 前引用

So, in the hash table, indexed by the weakly referenced item, is a list of 
all locations where this address is currently being stored.
 
For ARC, we also keep track of whether an arbitrary object is being 
deallocated by briefly placing it in the table just prior to invoking 
dealloc, and removing it via objc_clear_deallocating just prior to memory 
reclamation.

*/

// The address of a __weak variable.
// These pointers are stored disguised so memory analysis tools
// don't see lots of interior pointers from the weak table into objects.
/*
 DisguisedPtr类的定义如下。它对一个指针伪装处理，保存时装箱，调用时拆箱。可不纠结于为什么要将指针伪装，只需要知道DisguisedPtr<T>功能上等价于T*即可。
 */
typedef DisguisedPtr<objc_object *> weak_referrer_t;

#if __LP64__
#define PTR_MINUS_2 62
#else
#define PTR_MINUS_2 30
#endif

/**
 * The internal structure stored in the weak references table. 
 * It maintains and stores
 * a hash set of weak references pointing to an object.
 * If out_of_line_ness != REFERRERS_OUT_OF_LINE then the set
 * is instead a small inline array.
 */
#define WEAK_INLINE_COUNT 4

// out_of_line_ness field overlaps with the low two bits of inline_referrers[1].  看明白了 共用体 9-10占据out_of_line_ness 刚好对应第一个元素
// inline_referrers[1] is a DisguisedPtr of a pointer-aligned address.
// The low two bits of a pointer-aligned DisguisedPtr will always be 0b00
// (disguised nil or 0x80..00) or 0b11 (any other address).
// Therefore out_of_line_ness == 0b10 is used to mark the out-of-line state.
#define REFERRERS_OUT_OF_LINE 2

/// 每个 weak_entry_t 存储着一个对象的弱引用信息。weak_entry_t 的结构与 weak_table_t 很像，同样也是一个 hash 表，其中存储的元素是 weak_referrer_t ，实质是弱引用对象指针的指针。通过操作指针的指针，可以实现 weak 引用的指针在对象析构后，指向 nil。
// weak_referrer_t 就是objc_object **
struct weak_entry_t {
    // 阅后即焚 DisguisedPtr<objc_object> 会让<>进一个*
    DisguisedPtr<objc_object> referent; // weak_entry_t会持有对象 那么一个weakEntry就会为一个对象服务了么??
    
    union {
        ///  weak_entry_t有一个巧妙的设计，即如果一个对象对应的弱引用数目较少的话(<=WEAK_INLINE_COUNT，runtime把这个值设置为4)，则其弱引用会被依次保存到一个inline数组里
        ///!!!: 这两个数组是用来存储弱引用该对象的指针的指针的
        ///!!!: 都占32位
        struct {
            // 动态数组
#warning 这里难道是3个*??? 数组么 所以3个
            weak_referrer_t *referrers;
            uintptr_t        out_of_line_ness : 2;   ///< : 2是位域 只占两个bits 是否使用动态hash数组标记位
            uintptr_t        num_refs : PTR_MINUS_2; // hash数组中的元素个数
            uintptr_t        mask; // hash数组长度-1，会参与hash计算。（注意，这里是hash数组的长度，而不是元素个数。比如，数组长度可能是64，而元素个数仅存了2个）素个数）
            /*
             这个max_hash_displacement值是在每个元素插入的时候更新的，它总是记录在插入时，所发生的hash冲突的最大值。因此在查找时，hash冲突的次数肯定不会大于这个值。
             */
            uintptr_t        max_hash_displacement; // 可能会发生的hash冲突的最大次数，用于判断是否出现了逻辑错误（hash表中的冲突次数绝不会超过改值）
        };
        
        struct {
            // out_of_line_ness field is low bits of inline_referrers[1]
            // 定长数组
            weak_referrer_t  inline_referrers[WEAK_INLINE_COUNT];
        };
    };

    bool out_of_line() {
        return (out_of_line_ness == REFERRERS_OUT_OF_LINE);
    }

    /// 赋值方法
    weak_entry_t& operator=(const weak_entry_t& other) {
        memcpy(this, &other, sizeof(other));
        return *this;
    }

    /// 构造方法 __weak NSObject *obj = [NSObject alloc] init];
    // newReferent = obj newReferrer = &obj
    weak_entry_t(objc_object *newReferent, objc_object **newReferrer) : referent(newReferent)
    {
        /// 数组里面存的是objc_object **
        inline_referrers[0] = newReferrer;
        for (int i = 1; i < WEAK_INLINE_COUNT; i++) {
            inline_referrers[i] = nil;
        }
    }
};

/**
 * The global weak references table. Stores object ids as keys,
 * and weak_entry_t structs as their values.
 */
struct weak_table_t {
    /// 很标准的哈希结构
    weak_entry_t *weak_entries;
    size_t    num_entries;   // hash数组中的元素个数
    uintptr_t mask;         // hash数组长度-1，会参与hash计算。（注意，这里是hash数组的长度，而不是元素个数。比如，数组长度可能是64，而元素个数仅存了2个）
    uintptr_t max_hash_displacement; /// 我感觉最大冲突数 每次插入新元素的时候都会更新 应该等于当前的数字
};

/// Adds an (object, weak pointer) pair to the weak table.
id weak_register_no_lock(weak_table_t *weak_table, id referent, 
                         id *referrer, bool crashIfDeallocating);

/// Removes an (object, weak pointer) pair from the weak table.
void weak_unregister_no_lock(weak_table_t *weak_table, id referent, id *referrer);

#if DEBUG
/// Returns true if an object is weakly referenced somewhere.
bool weak_is_registered_no_lock(weak_table_t *weak_table, id referent);
#endif

///!!!: dealloc的时候 如果发现对象有弱引用就会调用这个方法释放所有的weak指针
/// Called on object destruction. Sets all remaining weak pointers to nil.
void weak_clear_no_lock(weak_table_t *weak_table, id referent);

__END_DECLS

#endif /* _OBJC_WEAK_H_ */
