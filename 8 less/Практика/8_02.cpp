#include <iostream>
using namespace std;

int *read(int);
int *summ(int *, int *, int);
void show(const int *, int);

int main()
{

    int size;
    cin >> size;

    int *arr1 = read(size);
    int *arr2 = read(size);

    show(arr1, size);
    show(arr2, size);
    int *arr3 = summ(arr1, arr2, size);

    show(arr3, size);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
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
int *summ(int *mas1, int *mas2, int len)
{
    int *temp = new int[len];
    for (int i = 0; i < len; i++)
    {
        temp[i] = mas1[i] + mas2[i];
        //*(temp + i) = *(mas1 + i) + *(mas2 + i)
    }

    return temp;
}

void show(const int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}