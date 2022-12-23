
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{

    char str1[] = "qwerty!";
    char str2[] = {'q', 'w', 'e', 'r', 't', 'y', '!'};

    cout << strlen(str1) << endl; // 7
    cout << sizeof(str1) << endl; // 8

    cout << strlen(str2) << endl; // 7
    cout << sizeof(str2) << endl; // ?
}