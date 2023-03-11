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

    catch (const std::exception &ex)
    {
        std::cout << "Код ошибки: " << ex.what() << std::endl;
    }
    std::cout << "Завершение работы" << std::endl;
    return 0;
}
double sqrt_val(const int &test)
{
    if (test < 0)
        throw std::exception();
    return sqrt(test);
}
