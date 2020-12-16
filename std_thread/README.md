# singal stread
```shell
g++ singal_thread.cpp -o main -std=c++11 -pthread
```

t.join() : 主线程等待t线程运行完在运行。

对于多线程情况,可能出现两个线程从同一个变量i中取值,如果两个线程取出来的值都是10那么i++之后就是11.两个线程在把11写入i. 那么i还是11而不是12.这样就会导致问题.

