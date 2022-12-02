#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{

    int arr[100][100];
    int n, m;
    // cin >> n >> m;
    cin >> n;
    m = n;
    int sum = 0;
    // int pr = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        arr[i][j] = (i == j)?0: (i > j)? 2: 1;

    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < n; j++)
    //         sum+=arr[i][j];

    //    for (int i = 0; i < n; i++)
    //     for (int j = 0; j < n; j++)
    //         if(i == j) sum+=arr[i][j];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         sum += arr[i][i];
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }

    //cout << " Сумма равна " << sum << endl;
    //()?истина:ложь
    //сумму элементов и вывести
    //сумму элементов главной диагонали (n = m)
    //гл  - 0; над - 1; под - 2
}