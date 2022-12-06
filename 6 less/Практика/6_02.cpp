#include <iostream>

using namespace std;

double pl(double a, double b)
{
    return a * b;
}

double per(double a, double b)
{
    return 2 * (a + b);
}

void pl_pr(double a, double b)
{
    cout << "Площаль равна: " << pl(a, b) << endl;
    cout << "Периметр равен: " << per(a, b) << endl;
}

void show(double rez)
{
    cout << "Результат равен: " << rez << endl;
}

// SOLID

int main()
{
    double dlina, shir;
    cin >> dlina >> shir;
    double rez = pl(dlina, shir);
    show(rez); //пер
    show(per(dlina, shir)); //рез-т ф-ии

    return 0;
}