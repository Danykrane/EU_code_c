#include <iostream>
using namespace std;

int main()
{

    int *ptr = new int; // объявляю указатель + выдялю память под него в дин памяти
    *ptr = 844;

    int *ptr2 = new int(12);

    cout << ptr << endl;
    cout << *ptr << endl;
    
    ptr = new int;
    *ptr = *ptr2;
    ptr = ptr2;

    cout << *ptr << endl;

    delete ptr2;
    delete ptr;
}