#include <iostream>
using namespace std;

int main()
{

    int value;
    cin >> value; // 42
    int *ptr;     //создал указатель
    cout << ptr << endl;
    cout << &value << endl;
    ptr = &value;
    cout << ptr << endl;
    cout << *ptr << endl;
    (*ptr)++;
    cout << value; // 43
}