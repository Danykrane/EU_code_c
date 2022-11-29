#include <iostream>
using namespace std;

int main()
{

    int arr[50];  //объявление массива на 50 значений
    int size_arr; //создали переменную для размера массива

    cin >> size_arr;

    for (int i = 0; i < size_arr; i++) //ввод значений в массив
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size_arr; i++)
    {
        cout << arr[i] << " "; //вывод значений в массива
    }
}