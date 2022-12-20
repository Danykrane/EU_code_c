#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // int strlen(строка);                      // размер строки
    // char srtncpy(строка_1, строка_2, размер) // копирует строку_2 в строку_1 опр кол-во символов
    // char  *strncat(char *destination, const char *source, size_t num); // добавление source к dest
    // const char *strstr(const char *str1, const char *str2); //поиск подстроки

    //

    // требуется ввести все эти слова через пробел
    // на выводе вывести каждое слово на новой строке

    // char data[140];
    // cin.getline(data, 140); // Dima    Razor1239      ms12-56

    // Dima
    // Razor1239
    // ms12-56

    char str1[240];
    cin.getline(str1, 240);

    char *pr = " "; // разделитель
    char *stop = strtok(str1, pr);
    while (stop != NULL)
    {
        cout << stop << endl;

        stop = strtok(NULL, pr);
    }
}