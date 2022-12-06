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

    //заполним массив рандомными значениями
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = -34 + rand() % static_cast<int>(100 - -34 + 1);
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

    int pr = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pr *= (i + j == n - 1) ? arr[i][j] : 1;
        }
    }
    cout << "Сумма над гл диагональю равна: " << pr << endl;

    //Альтернативный вариант
    pr = 1;
    for (int i = 0; i < n; i++)
    {
        pr *= arr[i][n - 1 - i]; //условие побочной диагонали
    }

    cout << "Сумма над гл диагональю равна: " << pr << endl;
}
