#include <iostream>
using namespace std;

int *read(int);
void show(const int *, int);
int *add(int *, int, int, int);

int main()
{

    int size, value, index;
    cin >> size;
    int *ptr = read(size);
    show(ptr, size);

    cin >> value >> index;
    ptr = add(ptr, size, value, index);
    show(ptr, size);

    delete[] ptr;
}

int *add(int *arr, int len, int val, int index)
{
    int *tem = new int[len + 1];

    for (int i = 0; i < index; i++)
    {
        tem[i] = arr[i];
    }

    tem[index] = val;

    for (int i = index; i < len; i++)
    {
        tem[i + 1] = arr[i];
    }

    delete[] arr; // удалим пред массив
    return tem;
}

int *read(int len)
{
    int *temp = new int[len];
    for (int i = 0; i < len; i++)
    {
        cin >> temp[i];
    }

    return temp; // возврат адреса
}

void show(const int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}