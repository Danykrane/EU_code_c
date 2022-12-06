#include <iostream>
#include <cmath>

using namespace std;

double per(int, int, int);
double per(float, float, float);
double per(double, double, double);
double square(int, int, int);
double square(double, double, double);
double square(float, float, float);

int main()
{

    int a, b, c;
    float a1, b1, c1;

    cin >> a >> b >> c;
    cout << square(a, b, c) << endl;

    cin >> a1 >> b1 >> c1;
    cout << square(a1, b1, c1) << endl;
}

double per(int a, int b, int c)
{
    return (a + b + c) / 2;
}
double per(double a, double b, double c)
{
    return (a + b + c) / 2;
}
double square(int a, int b, int c)
{
    double pol = per(a, b, c);
    return sqrt(pol * (pol - a) * (pol - b) * (pol - c));
}
double square(double a, double b, double c)
{
    double pol = per(a, b, c);
    return sqrt(pol * (pol - a) * (pol - b) * (pol - c));
}