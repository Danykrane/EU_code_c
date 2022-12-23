// требуется ввести все эти слова через пробел
// на выводе вывести каждое слово на новой строке

// char data[140];
// cin.getline(data, 140); // Dima    Razor1239      ms12-56

// Dima
// Razor1239
// ms12-56

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    char str1[240] = "   Artgoodz      okay  12-msi"; // все данные 11 пробелов 3 6 2
    char str2[240];                                   // все данные
    char c;
    // cout << "Name, NIC, Model compa:";
    //  cin.getline(str1, 240); //     Dima    Razor1239      ms12-56

    int len = strlen(str1); // вычислим длину до enter
    cout << "Длина строки: " << len << endl;
    cout << "Строка: \n=>"
         << str1 << endl;
    cout << "  ";
    for (int i = 0; i < len; i++)
    {
        cout << i;
    }
    cout << endl;

    int j = 0;
    int temp = 0;
    int cnt = 0;
    int spaces = 0;
    for (int i = 0; i < len; i++)
    {
        if (isspace(str1[i]))
            spaces++;
    }

    cout << "Всего пробелов" << spaces << endl;
    int razr = 0;
    int flag_c = 0;

    for (int i = 0; i < len; i++)
    {

        // int pr = 0;
        while (isspace(str1[i]))
        {
            // pr++;
            i++;
        }
        str2[razr] = str1[i];

        razr++;
    }

    cout << str2 << endl;

    return 0;
}