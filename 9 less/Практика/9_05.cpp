#include <iostream>
#include <cctype>
using namespace std;

void show_alphabeth();

int main()
{
    cout << "Английский алфавит: " << endl;
    show_alphabeth();
}

void show_alphabeth()
{
    for (int i = 65; i < 91; i++)
    {
        cout << static_cast<char>(i) << " ";
    }

    cout << endl;

    for (char i = 65; i < 91; i++)
    {
        cout << static_cast<char>((tolower(i))) << " ";
    }
}