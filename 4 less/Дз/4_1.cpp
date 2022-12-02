#include <iostream>
using namespace std;
int main()
{
    int massiv[10]{}, size_massiv;
    cout << "Vvedite chislo massiva: ";
    cin >> size_massiv;
    for (int i = 0; i < size_massiv; i++)
    {
        cout << "Vvedite chislo #" << i << ": ";
        cin >> massiv[i];
    }
    // 1 2 3 4 5 6 7 23
    for (int i = 0; i < size_massiv; i++)
    {
        short int palindrom = 0;
        for (int j = massiv[i]; j != 0; j /= 10)
        {
            palindrom = palindrom * 10 + j % 10;
        }
        (palindrom == massiv[i]) ? cout << "Palindrom\n" : cout << "ne palindrom" << endl;
    }
    return 0;
}