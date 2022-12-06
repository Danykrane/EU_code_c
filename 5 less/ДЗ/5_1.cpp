#include <iostream>
using namespace std;
int main()
{
    int count; // переменная для размера массива
    float arr[100] = {};
    cout << "Введите количество животных: ";
    cin >> count;

    cout << "\nВведите вес животных: ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    cout << "\n Ваш массив до сортировки по возрастанию: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "\n Ваш массив после сортировки по возрастанию: ";

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}