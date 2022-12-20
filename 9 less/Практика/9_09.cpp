// требуется ввести все эти слова через пробел
// на выводе вывести каждое слово на новой строке

// char data[140];
// cin.getline(data, 140); // Dima    Razor1239      ms12-56

// Dima
// Razor1239
// ms12-56

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char str1[240]; // все данные
    char c;
    cout << "Name, NIC, Model compa:";
    cin.getline(str1, 240); //     Dima    Razor1239      ms12-56

    for (int i = 0; i < 239; i++)
    {
        c = str1[i];
        if (isspace(c))
            c = '\n';
        putchar(c);
        i++;
    }

    return 0;
}