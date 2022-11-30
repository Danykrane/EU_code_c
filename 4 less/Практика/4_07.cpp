#include <iostream>
using namespace std;

int main()
{

    int arr[] = {12, 3, 5, 12, 55, 89, 56, 56, 33, 2222, 234, 23}; //объявили + иниц массив на 5 элем
    int arr2[] = {12, 3};                                          //объявили + иниц массив на 2 элем
    // cout << sizeof(arr) / sizeof(arr[0]) << endl;
    // cout << sizeof(arr2) << endl;
    // cout << endl;
    int size = sizeof(arr) / sizeof(arr[0]); // вычисление длины
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; //вывод значений в массива
    }

    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << arr2[i] << " "; //вывод значений в массива
    }
}
