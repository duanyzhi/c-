#include <iostream>
#include <thread>

int count = 0;

void add() {
  for (int i=0; i<1000; i++) {
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    count++;
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
