// строки - массив символов "" - строка ' ' - символ

#include <iostream>

using namespace std;

int main()
{
    // char str1[размер]; //объявление стат массива строк
    char str2[10] = {'a', 'b', 'r', 'f'};
    char str2_1[10] = "abrf";

    for (int i = 0; i < 10; i++)
    {
        cout << str2_1[i] << " ";
    }

    char str3[100] = "Hello world! Wow";
    cout << endl
         << str3 << endl;     // вывод строк
    cout << str3[3] << endl;  // l
    cout << str3[2] << endl;  // r
    cout << str3[8] << endl;  // пробел
    cout << str3[12] << endl; // пробел
    cout << str3[6] << endl;  // w

    char str5[] = "Hello!";
    int size = sizeof(str5) / sizeof(str5[0]); // опр длины

    for (int i = 0; i < size; i++)
    {
        cout << str5[i] << "";
    }

    cout << endl
         << str5 << endl;
}
