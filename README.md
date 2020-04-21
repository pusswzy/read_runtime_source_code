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



### 博客
https://blog.csdn.net/u013378438/article/details/80733391

> 以下按照技术点进行区分

## category

将分类注册到它的target class的核心代码
```objective-c
if (cat->instanceMethods ||  cat->protocols
                       ||  cat->instanceProperties)
                   {
                       if (cls->isRealized()) {
                           attachCategories(cls, &lc, 1, ATTACH_EXISTING);
                       } else {
                           objc::unattachedCategories.addForClass(lc, cls);
                       }
                   }
                   
                   if (cat->classMethods  ||  cat->protocols
                       ||  (hasClassProperties && cat->_classProperties))
                   {
                       if (cls->ISA()->isRealized()) {
                           attachCategories(cls->ISA(), &lc, 1, ATTACH_EXISTING | ATTACH_METACLASS);
                       } else {
                           objc::unattachedCategories.addForClass(lc, cls->ISA());
                       }NSString
                   }
```

IMP是由编译器生成的，如果我们知道了IMP的地址，则可以绕过runtime消息发送的过程，直接调用函数实现。关于这一点，我们稍后会谈到。
这也是为什么load方法可以绕后消息转发机制, 每个类都能调用的原因

> 老子一思考 上帝就发笑

如果我要是面试的话我会问两道题

- 分类中可以调用super么
可以的, 具体原因看源码就能知道. 分类的本质就是对原有的类做扩充. 很多网上的互相抄的文章都写错了.虽然这么写很奇怪.
- 分类的isa指针指向是什么?
仍然指向原类, 可以用  ``` po self->isa``` 验证, 能从另一方面证明了上一个问题.

## Class
### 1.一些常见的东西的本质
```
// Class就是一个指向objc_class结构体的指针
typedef struct objc_class *Class;

id就是objc_object *指针, 跟void *是有区别的
typedef struct objc_object *id;
```

```
// isa就是一个联合体, isa中也包括class.. 这也就是平时我们总说的通过isa找到xx的类/元类对象
union isa_t {
    isa_t() { }
    isa_t(uintptr_t value) : bits(value) { }

    Class cls;
    uintptr_t bits;
#if defined(ISA_BITFIELD)
    struct {
        ISA_BITFIELD;  // defined in isa.h
    };
#endif
};
```

### 2.方法转发过程
- 检测selector是否是应该忽略的，比如在Mac OS X开发中，有了垃圾回收机制，就不会响应retain，release这些函数。
- 判断当前receiver是否为nil，若为nil，则不做任何响应，即向nil发送消息，系统不会crash。
- 检查Class的method cache，若cache未命中，则进而查找Class 的 method list。
- 若在Class 的method list中未找到对应的IMP，则进行消息转发
- 若消息转发失败，程序crash

