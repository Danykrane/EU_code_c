#include <iostream>

using namespace std;
// template <class T>

// auto sum([](int a, int b) -> double
//          { return (a * b); });

auto sum([](auto a, auto b)
         { return a + b; });

int main()
{
    int choise;
    cout << "С какими типами вы ходите работать?\n1 - INT\n2 - DOUBLE\n3 - CHAR\n4 - BOOL" << endl;
    cin >> choise;
    switch (choise)
    {
    case 1:
        cout << "Сумма двух целых чисел: " << sum(1, 5);
        break;
    case 2:
        cout << "Сумма двух вещественных чисел: " << sum(1.3, 5.56);
        break;
    case 3:
        cout << "Сумма двух char значений: " << static_cast<char>(sum('10', '5'));
        break;
    case 4:
        cout << "Дизъюнкция двух bool значений: " << (sum(false, true));
        break;

    default:
        cout << "Wrong number" << endl;
        break;
    }

    return 0;
}