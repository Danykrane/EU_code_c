#include <iostream>
using namespace std;

int main()
{
    char symb1;       // объявили символьную переменную symb1 (char)
    char symb2 = 'b'; // объявили + инициалищировали symb2 значением b

    char symb3('c'); // объявили + инициалищировали symb3 значением c
    char symb4(99);  // объявили + инициалищировали symb4 значением c
    char symb5 = 99; // объявили + инициалищировали symb5 значением c

    cout << sizeof(symb1) << endl; // 1 байт

    symb1 = 'g'; // присваиваем значение переменной symb1

    cout << symb1 << endl; // g
    cout << symb2 << endl; // b
    cout << symb3 << endl; // с
    cout << symb4 << endl; // с
    cout << symb5 << endl; // с
}