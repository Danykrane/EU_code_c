#include <vector>
#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mutex;

void thread_func1(std::vector<int> &x)
{

    {
        // область видимости lock_guard
        std::lock_guard<std::mutex> l(mutex);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "1 th" << std::endl;
        x.push_back(0);
    }

    // асинхронный код
    size_t i = 100;
    while (i--)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << i << " ";
    }
}
void thread_func2(std::vector<int> &x)
{
    std::cout << "Some text" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    std::cout << "Some text" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    mutex.lock();
    for (int i = 0; i < 100; i++)
    {
        std::cout << "#";
    }
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    x.pop_back();
    mutex.unlock();

    size_t i = 10000;
    while (i--)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << static_cast<char>(i % 128) << " " << std::endl;
    }
}

int main()
{
    std::vector<int> vec;
    std::thread th1([&]
                    { thread_func1(vec); });
    std::thread th2([&]
                    { thread_func2(vec); });

    for (auto &it : vec)
    {
        std::cout << it << " ";
    }
    th1.join();
    th2.join();
    return 0;
}