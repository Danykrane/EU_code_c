#include <iostream>

using namespace std;

int main()
{
    //посчитать кол-во четных цифр в числе

    int number;
    cin >> number;

    unsigned short int cnt = 0;
    while (number != 0)
    {
        int temp = number % 10; //последний разяд
        if ((temp % 2 == 0))    //проверка на четность
        {
            cnt++;
        }

        number /= 10; //отбрасываю у числа последний разряд
        // cout << number << endl;
    }

    //На вход итерация 12345
    // 1 итерация: cnt = 0; 1234
    // 2 итерация: cnt = 1; 123
    // 3 итерация: cnt = 1; 12
    // 4 итерация: cnt = 2; 1
    // 5 итерация: cnt = 2; 0

    cout << number << endl; // 0
    cout << "Число четных разрядов " << cnt << endl;
}
