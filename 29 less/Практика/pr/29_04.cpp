// требуется найти площадь треуголтника по трем вершинам
// напишите программу, которая не будет принудительно завершать при неправильно введенных данных

#include <iostream>
#include <cmath>

using namespace std;

double sq(int &, int &, int &);

int main()
{
    int a, b, c;
    // классификатор ошибок
    try
    {
        cout << sq(a, b, c) << endl;
    }
    catch (const char *val)
    {
        cout << "Поймали ошибку: " << val << endl;
    }
    catch (const int &code)
    {
        if (code == 1)
            cout << "Ошибка при вводе значений " << endl;
        else if (code == 2)
            cout << "Ошибка при подсчтетах площади " << endl;
    }

    catch (const double &rez)
    {
        cout << "Значение перед взятием корня равно: " << rez << endl;
    }

    cout << "Завершение программы" << endl;
    return 0;
}

double sq(int &a, int &b, int &c)
{
    cin >> a >> b >> c;
    if (a <= 0)
        throw 1;
    else if (b <= 0)
        throw 1;
    else if (c <= 0)
        throw 1;

    double polu_p = (a + b + c) / 2.0;

    double semi_rez = polu_p * (polu_p - a) * (polu_p - b) * (polu_p - c);

    if (semi_rez <= 0)
        throw 2;

    return sqrt(polu_p * (polu_p - a) * (polu_p - b) * (polu_p - c));
}