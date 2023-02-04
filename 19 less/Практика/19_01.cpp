#include <iostream>

using namespace std;

template <typename T>
T minimum(const T &lhs, const T &rhs)
{
    return lhs < rhs ? lhs : rhs;
}

int main()
{
    int b, a = 10;

    b = 15;

    cout << minimum(a, b);
}

template <typename T, typename U, typename V>
class Foo
{
};

template <class T, class U, class V>
class Foo
{
};