
#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(double a, double b);

int main()
{

    int val1, val2;
    double val3, val4;

    cin >> val1 >> val2;
    cin >> val3 >> val4;

    cout << sum(val1, val2) << endl; //параметры
    cout << sum(val3, val4) << endl; //параметры
}

int sum(int a, int b) //аргумент
{
    return a + b;
}
double sum(double a, double b) //аргумент
{
    return a + b;
}