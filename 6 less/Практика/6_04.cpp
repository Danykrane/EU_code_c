#include <iostream>

using namespace std;

int diskr(int val1, int val2, int val3); //прототим ф-ии дискр
void show(int rez);                   //прототип ф-ии вывода

int main()
{
    //int - целые числа (4 байта)
    //double - вещщественные числа (8 бат)
    //ф-ия дискриминанта + ф-ия вывода
    int a, b, c;
    cin >> a >> b >> c;
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
