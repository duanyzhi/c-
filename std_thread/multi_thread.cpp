#include <iostream>
#include <thread>

void thread_fun(const std::string thread_name) {
  std::cout << thread_name << std::endl;
  for (int i=0; i < 100; i++)
    std::cout << "thread function: " << i << "\n";
}

// multi thread print is not right
int main()
{
    std::thread t1(&thread_fun, "thread1");   // t starts running
    std::thread t2(&thread_fun, "thread2");   // t starts running
    std::cout << "main thread begin \n";
    t1.join();   // main thread waits for the thread t to finish
    t2.join();
    std::cout << "main thread end \n";
    return 0;
}
