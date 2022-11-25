
//выводит числа кратные 2 (0 25) восх 0 2 4 6 8
//выводит числа кратные 5 (0 25) низх 25 20 15

#include <iostream>
using namespace std;
int main()

{
    for (int i = 0; i < 25; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
    for (int i = 25; i >= 0; i--)
    {
        if (i % 5 == 0)
            cout << i << " ";
    }
}