#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "ws";            // латиница
    cout << str.length() << endl; // размер
    wstring russrt;
    wcin >> russrt;
    cout << russrt.size() << endl;

    wcout << russrt << endl;
}