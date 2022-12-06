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

// SOLID

int main()
{
    double dlina, shir;
    cin >> dlina >> shir;
    pl_pr(dlina, shir);
    // cout << pl(dlina, shir) << endl;
    // cout << per(dlina, shir) << endl;
    

    return 0;
}