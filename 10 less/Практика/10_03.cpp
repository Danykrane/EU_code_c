#include <iostream>

using namespace std;

int main()
{

    char str1[10] = {};
    cin.getline(str1, 10); // что будет, если я введу qwerty

    cout << str1 << endl;

    cout << strlen(str1) << endl;
    cout << sizeof(str1) << endl;
}