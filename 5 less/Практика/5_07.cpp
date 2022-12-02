#include <iostream>

using namespace std;

int main()
{
    float wes[] = {2.12, -45.23, -5, 3.12, -1};
    int size = 5;
    int value_for_check;
    // cout << wes[0];
    // cout << wes[1];
    // cout << wes[2];
    for (int i = 0; i < sizeof(wes) / sizeof(wes[0]); i++)
    {
        cout << wes[i] << " ";
    }

    // cout << wes[2];
    cout << endl;

    cout << "Сортировка по возрастанию" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (wes[j] > wes[j + 1])
                swap(wes[j], wes[j + 1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << wes[i] << " ";
    }

    cout << "\nСортировка по убыванию" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (wes[j] < wes[j + 1])
                swap(wes[j + 1], wes[j]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << wes[i] << " ";
    }
}