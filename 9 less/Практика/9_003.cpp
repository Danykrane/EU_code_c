// Задача: введите 1 символ и один пробел, затем
// выведите их номера по таблице ASCII. (2 пер)

#include <iostream>
using namespace std;

int main()
{
    char symb1;
    char symb2;

    cin.get(symb1);
    cin.get(symb2);

    cout << static_cast<int>(symb1) << endl;
    cout << static_cast<int>(symb2) << endl;
}