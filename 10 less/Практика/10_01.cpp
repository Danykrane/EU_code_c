
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char str[100] = {};
    cin.getline(str, 100);

    bool isnum = 0;
    bool isAlp = 0;
    bool isalp = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (isnumber(str[i]))
            isnum = true;
        if (isupper(str[i]))
            isAlp = true;
        if (islower(str[i]))
            isalp = true;
    }

    if (isnum && isAlp && isalp && strlen(str) >= 8)
        cout << "OK";
    else
        cout << "NO";
}