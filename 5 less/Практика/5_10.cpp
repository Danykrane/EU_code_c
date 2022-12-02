
#include <iostream>

#include <iomanip>

using namespace std;

int main()
{

    int arr[100][100], n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j) // гл диагональ
    //             arr[i][j] = 0;
    //         else
    //             arr[i][j] = 1;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1) // поб диагональ
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
}