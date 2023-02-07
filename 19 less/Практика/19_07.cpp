#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

char sum(char a, char b)
{
    return a + b;
}



int main()
{
    int a = 12, b = 34;
    cout << sum(a, b) << endl;
}