// массив целочисленный (дин/стач)

// нужно найти сумму элементов массива
// цикл использовать нельзя

#include <iostream>
#include <ctime>
using namespace std;

int *read(int *, int);
void show(const int *, int);
bool rec(int &sch, int *mas, int size);

int main()
{
    int len = 6;
    int *arr;
    srand(time(0));
    arr = read(arr, len);
    // int summa = sum(arr, len);
    show(arr, len);

    delete[] arr;
}

int *read(int *arr, int len)
{
    int *temp = new int[len];
    int cnt = 0;
    rec(cnt, arr, len);

    return temp;
}

bool rec(int &sch, int *mas, int size)
{
    mas[sch] = sch + 1;
    sch++;
    if (sch == size)
        return 0;
    else
        rec(sch, mas, size);
}

void show(const int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}