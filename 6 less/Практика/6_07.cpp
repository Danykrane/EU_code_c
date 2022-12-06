#include <iostream>

using namespace std;

void show_arr(int[], int); //арг - массив, арг - число

int main()
{
    int arr[] = {2, 4, 56, 1, 2, 4, 3, 4, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    show_arr(arr, size); //ф-ия вывода одномерного массива
}

void show_arr(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}
