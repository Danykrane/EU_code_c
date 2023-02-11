#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> test = {1, 2, 3, 4, 5, 6, 7, 8};

    auto pos = next(test.begin(), 1);
    auto end = prev(test.end()); // 8
    end = prev(end, 1);          // 8 - 1
    end = prev(end, 3);          // 7 - 3 = 4
    cout << *pos << endl;
    cout << *end << endl;

    cout << test.front() << endl;
    cout << test.back() << endl;
}