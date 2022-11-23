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

    int number;
    int cnt = 0;

    cout << "Введи значение \n";
    cin >> number;

    while (number != 4)
    {
        cnt++; //счетчик операций
        cout << "Введи значение \n";
        cin >> number;
    }

    cout << "Цикл выполнялся: " << cnt << " раз!" << endl;
    cout << "Всего вводов переменной: " << cnt + 1 << " раз!" << endl;
}
