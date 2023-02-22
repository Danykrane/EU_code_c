#include <fstream>
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;
void delpr(string &test)
{
    auto pos = remove_if(test.begin(), test.end(), [](char val)
                         { return val == ' '; });
    test.erase(pos, test.end());
}

string name_f(const string &test)
{
    return (test.substr(0, test.find('-')));
}

string mes_f(const string &test)
{
    return (test.substr(test.find_last_of('-') + 1));
}

int year_f(const string &test)
{
    return atoi(test.substr(test.find('-') + 1, 4).c_str());
}
int main()
{
    //  Виктор-1999-май
    // Алексей-1990-август
    //        Кира     -      2000      -     июль

    //
    // Виктор родился в 1999 году в месяце май
    // Алексей родился в 1990 году в месяце август
    // Кира родился в 2000 году в месяце июль

    ifstream input("files/data5.txt");

    string str;
    if (input.is_open(), ios::in) // существование файла
    {
        ofstream out("files/out5.txt", ios::out);
        while (getline(input, str))
        {
            string name, mes;
            // unsigned int year;
            //  foo(str)

            delpr(str);
            name = name_f(str);
            mes = mes_f(str);
            unsigned int year = year_f(str);
            out << name << " родился в " << year << " году в месяце " << mes << endl;
        }
    }
    else
        cout << "Файл не найден";
}