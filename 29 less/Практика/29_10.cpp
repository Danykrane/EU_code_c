#include <iostream>
#include <cmath>

double sqrt_val(const int &);

int main()
{
    int val = -1;
    try
    {
        double rez = sqrt_val(val);
        std::cout << rez << std::endl;
    }
    catch (const char *msg)
    {
        std::cout << "Ошибка: " << msg << std::endl;
    }
    std::cout << "Завершение работы" << std::endl;
    return 0;
}
double sqrt_val(const int &test)
{
    if (test < 0)
        throw "Корень из отриц числа!";
    return sqrt(test);
}
