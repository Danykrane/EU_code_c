#include <iostream>
#include <deque>

int main()
{
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    for (int n : numbers)
        std::cout << n << "\t";
    std::cout << std::endl;

    for (int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << "\t";
    std::cout << std::endl;

    for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
        std::cout << *iter << "\t";
    std::cout << std::endl;

    return 0;
}