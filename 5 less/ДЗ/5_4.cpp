#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    int arr[100][100];
    int n;
    cout << "Введите размер матрицы: ";
    cin >> n;
    srand(time(0));

    //заполняем только над диагональю
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = (i < j) ? 1 : 0;
        }
    }

    cout << "Исходная матрица: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += (i < j) ? arr[i][j] : 0;
        }
    }

    cout << "Сумма над гл диагональю равна: " << sum << endl;
}
