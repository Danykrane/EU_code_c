#include <iostream>

using namespace std;

auto read([](int &a, int &b)
          { cin >> a >> b; });
auto pr([](int a, int b)
        { return a * b; });

int main()
{
    int val1, val2;
    // считывание лямбдой val1 и val2
    auto read1([&val1, &val2]()
               { cin >> val1 >> val2; });
    read1();

    // вывод произведения двух значений через лямбду
    auto pr1([val1, val2]()
             { return val1 * val2; });

    cout << pr1();

    return 0;
}