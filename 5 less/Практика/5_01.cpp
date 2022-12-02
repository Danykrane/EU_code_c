#include <iostream>

using namespace std;

int main()
{

    int n = 8;
    int A[100] = {9, 3, 5, 7, 2, 1, -8, 4};
    int k;
    cin >> k;
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
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    int g;
    bool flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == k)
        {
            flag = 1;
            g = i;
        }
    }
    if (flag)
        cout << " Индекс равен" << g << endl;
    else
        cout << "Такого числа нет" << endl;
}