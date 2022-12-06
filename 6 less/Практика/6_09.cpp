#include <iostream>
#include <ctime>

using namespace std;

void show_dv_arr(int[100][100], int, int);

int main()
{
    srand(time(0));
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    //заполнение массива ранд значениями

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 100 - 24;
        }
    }

    show_dv_arr(arr, n, m);

    int arr2[100][100];
    int len, shir;
    cin >> len >> shir;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < shir; j++)
        {
            arr2[i][j] = rand() % 100 - 24;
        }
    }
    show_dv_arr(arr2, len, shir);
}

void show_dv_arr(int array[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}