## Factory Design Pattern

对于一个if else的判断:

```c++
if (name == "a") {
 // do something
} else if (name == "b") {
  // do something
} else {
 // do...
}
```

如果判断逻辑中每个if后面逻辑有很多的一样的,这样写就很不好,一旦要改一点可能所有的If后面的do都要改.

工厂模式:

  有一个公共的基类, 然后有很多派生类继承了这个基类. 如果有基础功能添加,对于共同的代码可以在基类中改动.对于不同的功能可以在各自的派生类里面添加. 工厂模式中的类的调用可以用同一个函数.

这个里Factory就是基类, CppFactory和PythonFactory就是不同的工厂.重载了Operation函数来实现不同的操作. 然后GetOp函数主要是用来注册每个工厂类,将所有的注册信息放到map里面.同事GetOp有一个GetFactory的获取每个派生类的函数.这样所有的派生类都可以使用一个函数来注册和调用了.这里GetOp是一个单例模式.



## Singleton Design Pattern

单例模式:

 在程序运行的过程中只有一个实例.



常规的单例模式:

```c++
class A {
 public:
  static A& GetInstance() {
    static A instance;
    return instance;
  }
 void B() { 
   // ...
 }
}

int main() {
  A::GetInstance().B();
}
```

单例模式中定义了一个函数GetInstance,这个函数是static,即在整个程序运行中是唯一的,所以单例模式里面的变量在任何地方获取也都是唯一的,不会有两个实例. 单例模式返回的是自身的&,这样就可以调用自己的一些method B.