#include <iostream>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <thread>
#include <stdlib.h>

template <typename T>
class BlockingQueue
{
private:
    std::mutex              mutex;
    std::condition_variable cv;
    std::queue<T>           queue;
public:
    void push(T const& value) {
        {
            std::unique_lock<std::mutex> lock(this->mutex);
            queue.push(value);
        }
        this->cv.notify_one();
    }
    T pop() {
        std::unique_lock<std::mutex> lock(this->mutex);
        auto b = [=]{return !this->queue.empty();};
        std::cout << "if empty:" << b() << "\n";
        this->cv.wait(lock, [=]{ return !this->queue.empty(); });
        T out = std::move(this->queue.front());
        this->queue.pop();
        return out;
    }
};


int main() {
  BlockingQueue<int> q;

  // random time
  std::vector<int> tms{0,1,2,3,4};

  std::thread producer1([&]() {
    for (int i=0; i<20; i++) {
      int rt = tms[rand() % tms.size()];
      std::this_thread::sleep_for(std::chrono::milliseconds(rt));
      q.push(i);
    }
  });

  std::thread producer2([&]() {
    for (int i=20; i<40; i++) {
      std::this_thread::sleep_for(std::chrono::milliseconds(2));
      q.push(i);
    }
  });

  std::thread consumer1([&]() {
    for (int i=0; i<10; i++) {
      int rt = tms[rand() % tms.size()];
      std::this_thread::sleep_for(std::chrono::milliseconds(rt));
      auto value = q.pop();
      std::cout << "queue1 value:" << value << "\n";
    }
  });

  std::thread consumer2([&]() {
    for (int i=0; i<10; i++) {
      std::this_thread::sleep_for(std::chrono::milliseconds(2));
      auto value = q.pop();
      std::cout << "queue2 value:" << value << "\n";
    }
  });

  producer1.join();
  producer2.join();
  consumer1.join();
  consumer2.join();
  std::cout << "blocking queue end.\n";
}
