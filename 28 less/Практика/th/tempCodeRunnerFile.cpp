#include <vector>
#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mutex;

void thread_func1(std::vector<int> &x)
{

    x.push_back(0);
}
void thread_func2(std::vector<int> &x)
{
    x.pop_back();
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