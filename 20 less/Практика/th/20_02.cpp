#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Hello, World!";
    string str2(str1, 0, 9);  // Hello, Wo
    str2 = str1.substr(0, 5); // Hello
    cout << str2;
}