# condition_variable

```markdown
### 参数
notify_one   # notifies one waiting thread
notify_all   # notifies all waiting threads
wait         # blocks the current thread until the condition variable is woken up
```

condition_variable用来控制thread什么时候停止什么时候再开始运行。通常需要和``std::unique_lock<std::mutex>``一起使用。

### output

```tex
game start.
worker thread wait.
condition variable notify one.
worker thread processing completed.
game over.
```



对notify_one当worker_thread遇到cv.wait(lock)的时候当前线程停止运行。继续运行主程序，所以打印了condition variable notify one. 然后再主程序中调用cv.notify_onx来唤醒当前thread再次运行.



