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
    if (test < 0)
        test = 0;
    return sqrt(test);
}

double sqrt_val(int test)
{
    if (test < 0)
        return "Число меньше 0";
    return sqrt(test);
}

double sqrt_val(int test)
{
    if (test < 0)
        std::cout << "Число меньше 0" << std::endl;
    return sqrt(test);
}