#include <fstream>
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ifstream input("files/data4.txt");

    string str;
    if (input.is_open(), ios::in) // существование файла
    {
        ofstream out("files/out4.txt", ios::out);
        while (getline(input, str))
        {
            // foo(str)
            out << str << endl;
        }
    }
    else
        cout << "Файл не найден";
}