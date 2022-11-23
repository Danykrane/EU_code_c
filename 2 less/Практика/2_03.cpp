#include <iostream>

using namespace std;

int main()
{

    unsigned short int value;
    cin >> value;

    ((value / 10 % 10) % 2 == 0) ? cout << "Четный" : cout << "Не четн";

    // cout << ((value / 10 % 10) % 2 == 0) ? "Четный" : "Не четн";
}