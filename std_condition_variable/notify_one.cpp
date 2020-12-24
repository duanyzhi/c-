#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mutex;
std::condition_variable cv;

void worker_thread()
{
    std::unique_lock<std::mutex> lock(mutex);

    std::cout << "worker thread wait.\n";
    cv.wait(lock);

    std::cout << "worker thread processing completed.\n";
}

int main()
{
    std::cout << "game start.\n";
    std::thread worker(worker_thread);

    std::this_thread::sleep_for(std::chrono::milliseconds(10));

    std::cout << "condition variable notify one.\n";
    cv.notify_one();

    worker.join();   // wait thread end.
    std::cout << "game over.\n";
}
