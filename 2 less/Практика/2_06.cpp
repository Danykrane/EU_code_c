#include <iostream>

using namespace std;
// Задача: посчитать количество кратных
// 8 чисел и вывести, если таких
//чисел нет, то вывести сообщение “не найдено”.
int main()
{
    unsigned short int cnt = 0;
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 % 8 == 0)
        cnt++;
    if (num2 % 8 == 0)
        cnt++;
    if (num3 % 8 == 0)
        cnt++;
    if (num4 % 8 == 0)
        cnt++;

    (cnt == 0) ? cout << "Нет чисел\n" : cout << cnt << " чисел\n";
}