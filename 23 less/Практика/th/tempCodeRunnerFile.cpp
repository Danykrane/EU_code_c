#include <iostream>
#include <deque>
#include <stdexcept>

int main()
{
    std::deque<int> numbers = {1, 2, 3, 4, 5};
    try
    {
        int n = numbers.at(7);
    }
    catch (std::out_of_range e)
    {
        std::cout << "Incorrect index" << std::endl;
    }

    return 0;
}