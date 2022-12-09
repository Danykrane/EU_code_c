#include <iostream>
using namespace std;

void inc(int &);

int main()
{

    int value;
    cin >> value; // 42
    cout << "адрес переменной: " << &value << endl;

    inc(value);    //передача параметра в невозвратную ф-ию (параметр - ссылка)
    cout << value; // 43
}

void inc(int &ssil)
{
    cout << "адрес переменной: " << &ssil << endl;
    (ssil)++;
}
