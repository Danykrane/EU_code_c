#include <iostream>

using namespace std;

int main()
{
    //реализовать попрошаку
    //пока пользователь не ввел 4 -> просить его вводит еще раз

    // while (условие до какого момента делаем)
    // {
    //     //тело цикла
    // }

    int number = 0;

    // cout << "Введи значение \n";
    // cin >> number;

    while (number != 4)
    {
        cout << "Введи значение \n";
        cin >> number;
    }
}