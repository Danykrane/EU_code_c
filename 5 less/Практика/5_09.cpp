#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0)); //каждый раз новый рандом
    int arr[100][100], n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = -120 + (rand() % static_cast<int>(340));
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
}