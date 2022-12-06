#include <iostream>

using namespace std;

void show(int[]); //арг - массив, арг - число

int main()
{
    int arr[] = {2, 4, 56, 1, 2, 4, 3, 4, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    show_arr(arr); //ф-ия вывода одномерного массива
    //имя массива - указатель на его первый элемент

    
    //если мы хотим передать массив внутрь ф-ии ,то всегда передаем 2 параметра (1 - сам массив, 2 - длина массива)
}

void show_arr(int array[])
{
    int len = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}
