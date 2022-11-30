#include <iostream>
using namespace std;

int main()
{

    int arr[50];  //объявление массива на 50 значений
    int size_arr; //создали переменную для размера массива

    cin >> size_arr;
    
    // cin >> arr[0];
    // cin >> arr[1];
    // cin >> arr[2];
    // cin >> arr[3];
    // cin >> arr[4];
 
    // for (int i = 0; i < size_arr; i++) //ввод значений в массив
    // {
    //     cin >> arr[i];
    // }

    for (int i = 0; i < size_arr; i++)
    {
        cout << arr[i] << " "; //вывод значений в массива
    }
    // size = 8
    //  1 7 12 13 8 14 15 16 (arr)
    // arr[2] = 14
    // arr[4] = 16
    // arr[3] = 13
    // arr[0] = 1
}