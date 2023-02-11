#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> test = {1, 2, 3, 42, 5, 6, 7, 8};
    test.remove(42);
    for (const int &n : test)
    {
        std::cout << n << ' ';
    }
    cout << endl;
    auto pos = remove(test.begin(), test.end(), 3);
    for (const int &n : test)
    {
        std::cout << n << ' ';
    }
    cout << endl;
    test.erase(pos, test.end());
    for (const int &n : test)
    {
        std::cout << n << ' ';
    }
}