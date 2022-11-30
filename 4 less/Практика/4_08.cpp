#include <iostream>
using namespace std;

int main()
{

    double wes[] = {12.12, 3.45, 5.18, 12.32453, 55.754, 89.22};

    int size = sizeof(wes) / sizeof(wes[0]); // вычисление кол-ва эл-тов
                                             // cout << size;
    //примем , что мин зн wes[0]
    //примем , что макс зн wes[0]
    double max = wes[0];
    double min = wes[0];
    unsigned short int pos_max = 0;
    unsigned short int pos_min = 0;

    for (int i = 0; i < size; i++)
    {
        if (wes[i] > max)
        {
            max = wes[i];
            pos_max = i;
        }

        if (wes[i] < min)
        {
            min = wes[i];
            pos_min = i;
        }
    }

    cout << "Max value = " << max << " ее позиция " << pos_max + 1 << endl;
    cout << "Min value = " << min << " ее позиция " << pos_min + 1 << endl;

    //найти максимальный и нимальный вес (1)
    //максимальный весЖ и нимальный вес:

    //найти позицию максимального и нимального веса (2)
    //Собкака с макс весом находится на (temp) позиции
    //Собкака с мин весом находится на (temp) позиции
}
