
#include <iostream>
using namespace std;

int main()
{

    double arr[5] = {12.3, 3, 5, 12, 89}; //объявили + иниц массив на е5 элем
    double arr2[5] = {12.3, 2};           //объявили + иниц массив на е5 элем
    double arr3[5] = {};                  //объявили + иниц массив на е5 элем
    int size_arr = 5;
    double sum = 0, pr = 1;

    for (int i = 0; i < size_arr; i++)
    {
        cout << arr[i] << " "; //вывод значений в массива
    }
    cout << endl;
    for (int i = 0; i < size_arr; i++)
    {
        cout << arr2[i] << " "; //вывод значений в массива
    }

    cout << endl;
    for (int i = 0; i < size_arr; i++)
    {
        cout << arr3[i] << " "; //вывод значений в массива
    }
}