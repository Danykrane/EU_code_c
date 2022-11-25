#include <iostream>
#include <cmath>
int main()
{
    int a = 0, max = INT16_MIN, min = INT16_MAX, buf = 0;
    std::cout << "Vvedite chislo \n";
    std::cin >> a;
    // 12345
    while (a)
    {
        buf = a % 10;
        if (buf < min)
        {
            min = buf;
        }
        if (buf > max)
        {
            max = buf;
        }
        a = a / 10;
    }
    std::cout << max << " " << min << std::endl;
    return 0;
}