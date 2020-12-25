## queue

**parameters**

```c++
queue.front();    // 获取第一个元素
queue.back();     // 获取最后一个元素
queue.empty();    // 检查queue是不是空的
queue.size();     // queue大小
queue.push(ele);  // 在queue的最后添加元素
queue.pop();      // 删除queue第一个元素
```



queue容器只能访问其第一个元素和最后一个元素。



## deque

**parameters**

```c++
dq.front();    // 获取第一个元素
dq.back();     // 获取最后一个元素
dq.empty();    // 检查deque是不是空的
dq.size();     // deque大小
dq.push_back(ele);  // 在deque的最后添加元素
dq.pop_front();      // 删除deque第一个元素
dq.push_front(ele);  // 在deque的第一个位置插入元素
```

deque双向队列，可以在首位位置都插入元素。



## blocking queue

blocking queue阻塞队列主要是为了多线程安全使用的，其主要是为了解决当queue为空的时候禁止从里面pop，当queue满的时候禁止再往里面push元素。

对于多个生产者和多个消费者，假如一个长度固定的queue有多个线程共享该queue的内存。那么可能出现消费者消耗大于生成者供应的情况，这个时候就要使用unique_lock来锁住线程，不能在从里取元素。



在blocking_queue.cpp函数中生产者必须要大于消费者。这里都是20个元素个数，如果消费者大于了20那么程序就会卡死在`` this->cv.wait(lock, [=]{ return !this->queue.empty(); });``这一行，会一直等待queue中再出现元素。如果去掉这一行则会出现queue中还没有元素consumer就开始取的情况，导致取出来的元素都是不正确的。



[=]{ return !this->queue.empty(); })是一个lambda表达式。主要用来判断queue里面内容是不是空，cv.wait接收两个值，第一个是需要等待的lock，第二个是参数用来判断是否要wait。当queue里的值为空则等待，不继续当前线程pop的操作。