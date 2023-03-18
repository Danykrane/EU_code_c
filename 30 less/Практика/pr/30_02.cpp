#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "abcd";
    string str2(str, 5);
    cout << str2 << endl;
}