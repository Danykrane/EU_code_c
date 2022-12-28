#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string err(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (isspace(str[i]))
        {
            while (isspace(str[i + 1]))
                str.erase(i, 1);
        }
    }
    return str;
}
int main()
{

    string str = "   Hellow   my         dear     friend!       ";
    // getline(cin, str);
    str.erase(0, str.find_first_not_of(' ')); // удаление вначале
    str.erase(str.find_last_not_of(' ') + 1); // удаление в конце

    cout << err(str);
}