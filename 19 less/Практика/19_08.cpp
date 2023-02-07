#include <iostream>

using namespace std;

template <typename arg>
arg sum(arg a, arg b)
{
    return a + b;
}
template <class arg>

void show(arg a, arg b)
{
    cout << "Сумма а и b = " << sum(a, b);
}

// template <class arg>

int main()
{
    // cout << sum(nuber(12.3, 5));
    float a = 12.34, b = 34;
    show(a, b);
}