
//выводит числа кратные 2 (0 25) восх 0 2 4 6 8
//выводит числа кратные 5 (0 25) низх 25 20 15

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    for (int i = 0; i < 25; i += 2)
        cout << i << " ";

    cout << endl;
    for (int i = 25; i >= 0; i -= 5)
        cout << i << " ";

    // вывести мне таблицу умножения на 7 [1 11)
    // 1 * 7 = 7
    // 2 * 7 = 14
    cout << endl;
    for (int i = 1; i <= 10; i++)
        cout << i << "*7=" << i * 7 << endl;

    //таблицу кубов [1, 11)
    for (int i = 1; i <= 10; i++)
        cout << i << "*" << i << "*" << i << " = " << pow(i, 3) << endl;

    //вводится число (длина неизвестна)

}
