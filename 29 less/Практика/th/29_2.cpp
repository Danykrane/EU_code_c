#include <vector>
#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mutex;

void thread_func1(std::vector<int> &x)
{
    std::lock_guard<std::mutex> lock(mutex);
    x.push_back(0);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
void thread_func2(std::vector<int> &x)
{
    mutex.lock();
    x.pop_back();
    mutex.unlock();
}

int main()
{
    std::vector<int> vec;
    std::thread th1([&]
                    { thread_func1(vec); });
    std::thread th2([&]
                    { thread_func2(vec); });

    th1.join();
    th2.join();
    return 0;
}