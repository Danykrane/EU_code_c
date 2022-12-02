#include <iostream>

using namespace std;

int main()
{

    int n = 8;
    int A[100] = {9, 3, 5, 7, 2, 1, -8, 4};
    cout << "Введите число для поиска\n";
    int k;

    cin >> k; // переменная для поиска

    cout << "Не отсорт послед\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }
        }
    }

    cout << "Не сорт послед\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    short int g = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == k)
        {
            g = i;
        }
    }
    if (g != -1)
        cout << " \nИндекс равен" << g << endl;
    else
        cout << "\nТакого числа нет" << endl;
}