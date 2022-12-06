#include <iostream>

using namespace std;

int main()
{

    int count, dopmassiv;
    float arr[100] = {};

    cout << "Введите размер первого массива: ";
    cin >> count;
    cout << "Введите значения: ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    cout << "\n Введенные значения: ";

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "\n Отсортированный массив: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n Скольо элементов хотите добавить? ";
    cin >> dopmassiv;

    if (dopmassiv < 0)
        dopmassiv = 0;

    cout << "Введите значения: ";
    for (int i = count; i < count + dopmassiv; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < (count + dopmassiv) - 1; i++)
    {
        for (int j = 0; j < (count + dopmassiv) - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "\n Все измерения: ";
    for (int i = 0; i < count + dopmassiv; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}