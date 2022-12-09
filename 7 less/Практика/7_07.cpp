#include <iostream>
using namespace std;

void show(const int *, const int &);
void read(int *, const int &);

int main()
{
    int arr[100];
    int size = 8;
    int *ptr = arr; // присвоили указателю ptr адрес первой ячейки массива
    // * - разыменование (получение значения по данному адрресу)
    read(arr, size);
    show(arr, size);
    cout << endl;
    show(ptr, size);
}

void show(const int *mass, const int &len)
{
    for (int i = 0; i < len; i++)
    {
        // cout << *(mass + i) << " ";
        cout << mass[i] << " ";
    }
}

void read(int *mass, const int &len)
{
    for (int i = 0; i < len; i++)
    {
        *(mass + i) = i;
        // mass[i] = i;
    }
}