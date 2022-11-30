
#include <iostream>
using namespace std;

int main()
{

    double arr[100]; //объявление массива на 50 значений
    int size_arr;    //создали переменную для размера массива
    double sum = 0, pr = 1;

    cin >> size_arr;
    for (int i = 0; i < size_arr; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
            arr[i] = 1;
    }
    // 1 2 3 4 3 2
    // 1 * 1
    // 1 * 2
    // 2 * 3
    // 6 * 4
    // 24 * 3

    for (int i = 0; i < size_arr; i++)
    {
        sum += arr[i];
        pr *= arr[i];
    }

    cout << "sum: " << sum << " pr:" << pr << endl;

    // for (int i = 0; i < size_arr; i++)
    // {
    //     cout << arr[i] << " "; //вывод значений в массива
    // }

    //продумайте, что если вес животного < 0, то сделать его 1
}