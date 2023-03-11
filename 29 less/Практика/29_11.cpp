#include <iostream>
#include <cmath>
#include <exception>
#include <stdexcept>

double sqrt_val(const int &);

int main()
{
    int val = -1;
    try
    {
        double rez = sqrt_val(val);
        std::cout << rez << std::endl;
    }

    catch (std::overflow_error err)
    {
        std::cout << "Overflow_error: " << err.what() << std::endl;
    }
    catch (std::runtime_error err)
    {
        std::cout << "Runtime_error: " << err.what() << std::endl;
    }
    catch (std::exception err)
    {
        std::cout << "Exception!!!" << std::endl;
    }

    std::cout << "Завершение работы" << std::endl;
    return 0;
}
double sqrt_val(const int &test)
{
    if (test < 0)
        throw std::runtime_error("value <0! ");
    return sqrt(test);
}
