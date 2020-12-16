#include <iostream>
#include <thread>
#include <mutex>

int count = 0;
std::mutex mutex;

void add() {
  for (int i=0; i<1000; i++) {
    mutex.lock();
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    count++;
    mutex.unlock();
  }
}

int main() {
  std::thread t1(add);
  std::thread t2(add);
  t1.join();
  t2.join();
  std::cout << count << std::endl;
  return 0;
}
