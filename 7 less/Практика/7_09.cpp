#include <iostream>
#include <ctime>
using namespace std;

void input(int *arr, const int &len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = rand() % 100 + 12;
    }
}

void sort(int *arr, const int &len)
{
    //сортировка
}
void show(const int *arr, const int &len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    srand(time(0));
    int size;
    cin >> size;
    int *ves = new int[size];
    // int *ves = new int(size);
    input(ves, size);
    sort(ves, size);
    show(ves, size);

    delete[] ves;
}