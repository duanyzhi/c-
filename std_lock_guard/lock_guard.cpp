#include <thread>
#include <mutex>
#include <iostream>
 
// ref: cppreference

int g_i = 0;
std::mutex g_i_mutex;  // 保护 g_i
 
void safe_increment()
{
    std::lock_guard<std::mutex> lock(g_i_mutex);
    ++g_i;
 
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    std::cout << std::this_thread::get_id() << ": " << g_i << '\n';
 
    // g_i_mutex 在锁离开作用域时自动释放
}
 
 int main()
 {
  std::cout << "main: " << g_i << '\n';
   
  // 每个线程实现+1的功能
  std::thread t1(safe_increment);
  std::thread t2(safe_increment);
            
  t1.join();
  t2.join();
                     
  std::cout << "main: " << g_i << '\n';
}
