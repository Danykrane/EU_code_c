// создать строку имя, никнейм и модель компа
// требуется ввести три строки и вывести их на экран

#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    cout << "NIC: ";
    cin.getline(str1, 10);
    cout << "\nModel compa: ";
    cin.getline(str2, 10);
    cout << "\n Name: ";
    cin.getline(str3, 10);
    cout << str1 << " " << str2 << " " << str3;
    return 0;
}