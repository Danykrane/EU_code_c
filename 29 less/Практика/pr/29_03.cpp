// требуется найти площадь треуголтника по трем вершинам
// напишите программу, которая не будет принудительно завершать при неправильно введенных данных

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;

    try
    {
        cin >> a >> b >> c;
        if (a <= 0)
            throw "Первая торона меньш или равно 0";
        else if (b <= 0)
            throw "Вторая сторона меньш или равно 0";
        else if (c <= 0)
            throw "Третья сторона меньш или равно 0";

        double polu_p = (a + b + c) / 2.0;

        double semi_rez = polu_p * (polu_p - a) * (polu_p - b) * (polu_p - c);
        if (semi_rez < 0)
            throw semi_rez;

        double square = sqrt(polu_p * (polu_p - a) * (polu_p - b) * (polu_p - c));
        cout << square << endl;
    }
    catch (const char *val)
    {
        cout << "Поймали ошибку: " << val << endl;
    }

    catch (const double rez)
    {
        cout << "Значение перед взятием корня равно: " << rez << endl;
    }

    cout << "Завершение программы" << endl;
    return 0;
}