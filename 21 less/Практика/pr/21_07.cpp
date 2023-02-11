#include <iostream>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    list<int> test = {1, 2, 3, 3, 42, 5, 6, 7, 8, 5, 2, 2, 2, 1};

    for (const int &n : test)
    {
        std::cout << n << ' ';
    }
    cout << endl;
    test.unique();

    for (const int &n : test)
    {
        std::cout << n << ' ';
    }
    set<int> id;

    for (const int &n : test)
    {
        id.insert(n);
    }
    cout << endl;
    for (const int &n : id)
    {
        std::cout << n << ' ';
    }
}