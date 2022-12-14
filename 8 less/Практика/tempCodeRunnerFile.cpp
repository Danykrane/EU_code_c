#include <iostream>
using namespace std;

int main()
{
    char symb1 = 'k';
    char symb2 = 'w';

    cout << static_cast<int>(symb1) << endl; // 107 - код символа k
    cout << static_cast<int>(symb2) << endl; // 119 - код символа w
}