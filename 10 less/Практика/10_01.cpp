
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char str[101] = {};
    cin.getline(str, 101);

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
    {
        cout << "OK" << endl;
        cout << "Введите еще раз" << endl;
        char str2[101] = {};
        cin.getline(str2, 101);
        if (strcmp(str, str2) == 0)
            cout << "пароль принят" << endl;
        else
            cout << "пароль не принят" << endl;
    }

    else
        cout << "NO";
}