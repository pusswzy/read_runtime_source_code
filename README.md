# read_runtime_source_code
About iOS runtime source code 


> 根据Apple最近源码 记录下一点自己的想法 🔞

* 20200324 https://opensource.apple.com/tarballs/objc4/ [779.1] *


### 总结
- 方法中使用到的 slowpath 和 fastpath，其实这两个都是宏定义，与代码逻辑本身无关，定义如下：
```
// x 很可能不为 0，希望编译器进行优化
#define fastpath(x) (__builtin_expect(bool(x), 1))
// x 很可能为 0，希望编译器进行优化
#define slowpath(x) (__builtin_expect(bool(x), 0))
```


### 博客
https://blog.csdn.net/u013378438/article/details/80733391
