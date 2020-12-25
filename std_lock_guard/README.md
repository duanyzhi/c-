## without_mutex
多个线程对同一个变量进行读写操作.假定线程1从count里读取到了10,线程2也读取到了10.分别加1.那么count就还是11而不是12.

## with_mutex
mutex.lock()表示给当前操作上锁,即从lock到unlock之间的部分,如果当前线程没有结束那么其他线程就不能访问这里面的操作.
即第一个线程在进行sleep和count++的时候第二个线程是不能进行这两个操作的.只能等着.这样就不会出现取数据异常情况了.
std::mutex在任意时刻只允许一个线程对其上锁.


std::mutex的死锁情况:第一个线程上锁但是在unlock之前程序失败退出了导致一直没有unlock,那么后面的线程就会一直等待,无法进行.
即出现了死锁情况.


## lock guard
```shell
g++ lock_guard.cpp -o mian -lpthread -std=c++11

std::lock_guard在创建时构造并加锁,在离开作用域时析构并解锁.


多线程之间的内存是共享的,比如count就是同一个.

```





## unique_lock

**parameters**

```c++
lock.try_lock();   // 尝试是否可以加锁
lock.unlock();     // 手动解锁
```

unique_lock功能基本和lock_guard一样，但是比lock guard更加灵活。