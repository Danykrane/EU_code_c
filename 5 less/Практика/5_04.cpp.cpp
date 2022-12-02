#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{

    int A[100][100] = {};
    int n;
    srand(time(0));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = -120 + (rand() % static_cast<int>(340 - -120 + 1));
        }
    }
    cout << endl;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (A[i][i] % 2 != 0)
            cnt *= A[i][i];
    }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << cnt << " ";
}