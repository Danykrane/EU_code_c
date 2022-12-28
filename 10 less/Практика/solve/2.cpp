
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char str[256];
    cin.getline(str, 100, '.');

    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i];
    }
}