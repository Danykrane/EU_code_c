#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    int arr[100] = {}, chislo;
    cout << "vvedite chislo: ";
    cin >> chislo;
    srand(time(0));
    for (int i = 0; i < chislo; i++)
    {
        arr[i] = -120 + (rand() % static_cast<int>(340));
    }

    for (int i = 0; i < chislo; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}