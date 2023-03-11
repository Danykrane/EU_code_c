#include <iostream>
#include <cmath>

double sqrt_val(int);

int main()
{
    int val = -1;
    double rez = sqrt_val(val);

    std::cout << rez << std::endl;

    return 0;
}
double sqrt_val(int test)
{
    return sqrt(test);
}
