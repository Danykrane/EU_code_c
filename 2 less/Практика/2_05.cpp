#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned short int chislo;
    cout << "Vvedite chislo" << endl;
    cin >> chislo;
    switch (chislo)
    {
    case 1 ... 15:
        cout << "nothing";
        break;
    case 16 ... 18:
        cout << "candy";
        break;
    case 20 ... 24:
        cout << "skov";
        break;
    case 25:
        cout << "Grand Prize";
        break;
    default:
        cout << "Net takogo chisla";
        break;
    }
    return 0;
}