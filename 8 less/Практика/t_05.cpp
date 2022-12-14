#include <iostream>
using namespace std;

int main()
{
    char symb1, symb2;
    // cin >> symb1 >> symb2; // пробел не считывает

    cin.get(symb1); // для считывания пробела будем использовать ф-ию get()
    cin.get(symb2);

    cout << "Символ " << symb1 << " имеет номер: " << static_cast<int>(symb1) << endl; // 107 - код символа k
    cout << "Символ " << symb2 << " имеет номер: " << static_cast<int>(symb2) << endl; // 119 - код символа w

    uint16_t val1, val2;
    cin >> val1 >> val2;
    cout << static_cast<char>(val1) << endl;
    cout << static_cast<char>(val2) << endl;
}