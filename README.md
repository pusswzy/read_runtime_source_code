# read_runtime_source_code
About iOS runtime source code 


> 根据Apple最近源码 记录下一点自己的想法 🔞

* 20200324 https://opensource.apple.com/tarballs/objc4/ [779.1] *




## 总结

- 方法中使用到的 slowpath 和 fastpath，其实这两个都是宏定义，与代码逻辑本身无关，定义如下：
```
// x 很可能不为 0，希望编译器进行优化
#define fastpath(x) (__builtin_expect(bool(x), 1))
// x 很可能为 0，希望编译器进行优化
#define slowpath(x) (__builtin_expect(bool(x), 0))
```

### category
如果我要是面试的话我会问两道题

- 分类中可以调用super么
可以的, 具体原因看源码就能知道. 分类的本质就是对原有的类做扩充. 很多网上的互相抄的文章都写错了.虽然这么写很奇怪.
- 分类的isa指针指向是什么?
仍然指向原类, 可以用  ``` po self->isa``` 验证, 能从另一方面证明了上一个问题.


### 博客
https://blog.csdn.net/u013378438/article/details/80733391



