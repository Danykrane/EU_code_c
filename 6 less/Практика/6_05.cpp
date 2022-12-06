#include <iostream>

using namespace std;

int diskr(int val1, int val2, int val3); //прототим ф-ии дискр
void show(int rez);                      //прототип ф-ии вывода

void show_addr(int number){
    cout << "Адрес переменной: "<<&number<<endl;
}

int main()
{
    // & - (ссылка - адрес места, где лежит переменная)
    int a, b, c;
    cin >> a >> b >> c;
    cout << &a << " " << &b << " " << &c << endl;

    //напишите ф-ию, которая выводит адрес переменной

    show(diskr(a, b, c));

    return 0;
}

int diskr(int val1, int val2, int val3)
{
    double d;
    d = (val2 * val2) - 4 * val1 * val3;
    return d;
}

void show(int rez)
{
    cout << "Значение равно: " << rez << endl;
}
