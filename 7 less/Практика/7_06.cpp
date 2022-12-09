#include <iostream>
using namespace std;

void show(const int *, const int &);

int main()
{
    int arr[100] = {1, 8, 3, 4, 5, 6, 56, 8};
    int size = 8;
    int *ptr = arr; // присвоили указателю ptr адрес первой ячейки массива
    // * - разыменование (получение значения по данному адрресу)
    cout << arr << endl;
    cout << *arr << endl;       // 1 arr[0]
    cout << *(arr + 1) << endl; // arr[1]
    cout << *(arr + 4) << endl; // arr[4]
    cout << *(arr + 6) << endl; // arr[6]

    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr++) << " ";
    }
}

void show(const int *mass, const int &len)
{
    for (int i = 0; i < len; i++)
    {
        cout << *(mass + i) << " ";
    }
}