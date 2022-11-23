// weight - double [1.5 - 6]
// rost [30 -90] , len [40 -150] - uns hort __INT8_TYPE__
// perenoska - bool

#include <iostream>

using namespace std;

int main()
{
    double weight;
    unsigned short int rost, len;
    bool perenoska;

    cin >> weight >> rost >> len >> perenoska;

    if (weight >= 1.5 && weight <= 6)
    {
        if (rost >= 30 && rost <= 90)
        {
            if (len >= 40 && len <= 150)
            {
                if (perenoska == 1)
                {
                    cout << "Проходите!" << endl;
                }
                else
                    cout << "Нет переноски" << endl;
            }
            else
                cout << "Не подх длина" << endl;
        }
        else
            cout << "Не подх рост" << endl;
    }
    else
        cout << "Не прох по весу" << endl;
}