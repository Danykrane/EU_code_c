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
    for (char i = 97; i < 122; i++)
    {
        cout << (i) << " ";
    }

    cout << endl;

    for (char i = 97; i < 122; i++)
    {
        cout << static_cast<char>(toupper(i)) << " ";
    }
}