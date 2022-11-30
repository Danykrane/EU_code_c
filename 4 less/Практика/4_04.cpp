
#include <iostream>
using namespace std;

int main()
{

    double arr[100]; //объявление массива на 50 значений
    int size_arr;    //создали переменную для размера массива

    cin >> size_arr;
    for (int i = 0; i < size_arr; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size_arr; i++)
    {
        cout << arr[i] << " "; //вывод значений в массива
    }

    //продумайте, что если вес животного < 0, то сделать его 1
}