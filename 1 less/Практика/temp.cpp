#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

namespace fast
{
    double log(double val)
    {
        return val * val;
    }
}
// using namespace fast;
//  double log(double val)
//  {
//      return val * val;
//  }
int main()
{
    short a, b;
    int s;
    cout << "Введите 2 числа" << endl;
    cin >> a >> b;
    unsigned char operation;
    cout << "Какую операцию хотите сделать?" << endl;
    cout << "1 - сложение" << endl;
    cout << "2 - вычитание" << endl;
    cout << "3 - умножение" << endl;
    cout << "4 - деление" << endl;
    cout << "5 - возведение в степень " << endl;
    cout << "6 - логарифм по основанию a числа b" << endl;

    cin >> operation;

    if (operation == '1')
    {

        cout << a + b << endl;
    }
    else if (operation == '0')
    {
        cout << fast::log(a);
    }
    else if (operation == '2')
    {
        cout << a - b;
    }
    else if (operation == '3')
    {
        cout << a * b;
    }
    else if (operation == '4')
    {
        cout << (a * 1.0) / b;
    }
    else if (operation == '5')
    {
        cout << pow(a, b);
    }
    else if (operation == '6')
    {
        cout << log(b * 1.0) / log(a * 1.0);
    }
    else
    {
        cout << "Вы неправильно указали номер";
    }
    cout << fixed << setprecision(5) << endl;
}
