#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    int first = numbers.front();                                // 1
    int last = numbers.back();                                  // 5
    int second = numbers[1];                                    // 2
    int third = numbers.at(2);                                  // 3
    std::cout << first << second << third << last << std::endl; // 1235

    return 0;
}