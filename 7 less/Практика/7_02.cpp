#include <iostream>
using namespace std;

void inc(int *);

void inc(int);

int main()
{

    int value;
    cin >> value; // 42
    cout << "адрес переменной: " << &value << endl;
    int *ptr; //создал указатель

    ptr = &value;

    inc(ptr); //передача параметра в невозвратную ф-ию (параметр - указатель)

    // inc(value);    //передача параметра в невозвратную ф-ию (параметр - значение)
    cout << value; // 43
}

void inc(int *ukaz)
{
    cout << "адрес переменной: " << ukaz << endl;
    (*ukaz)++;
}

void inc(int val)
{
    cout << "адрес переменной: " << &val << endl;
    (++val)++;
    cout << "Значение переменно равно: " << val << endl;
}