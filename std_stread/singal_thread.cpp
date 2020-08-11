#include <iostream>
#include <thread>

void thread_fun() {
  for (int i=0; i < 100; i++)
    std::cout << "thread function: " << i << "\n";
}

int main()
{
    std::thread t(&thread_fun);   // t starts running
    std::cout << "main thread begin \n";
    t.join();   // main thread waits for the thread t to finish
    std::cout << "main thread end \n";
    return 0;
}
