#include <iostream>

using namespace std;

void pl_pr(double a, double b)
{
    cout << "Площаль равна: " << pl(a, b) << endl;
    cout << "Периметр равен: " << per(a, b) << endl;
}

double pl(double a, double b)
{
    return a * b;
}

double per(double a, double b)
{
    return 2 * (a + b);
}
void show(double rez)
{
    cout << "Результат равен: " << rez << endl;
}

double vvod(double val)
{
    cin >> val;
    return val;
}

// SOLID

int main()
{
    double dlina, shir;
    dlina = vvod(dlina);
    shir = vvod(shir);

    double rez = pl(dlina, shir);
    show(rez);              //пер
    show(per(dlina, shir)); //рез-т ф-ии

    return 0;
}