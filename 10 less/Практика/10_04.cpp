#include <iostream>
using namespace std;

int main()
{

    // объявили + иниц
    int vit_et1 = 10, vit_et2 = 10, vit_et3;
    bool vit_pl1 = 1, vit_pl3 = 0, vit_pl3 = 0;

    cin >> vit_et3;

    int par_et1, par_et2 = 10, par_et3 = 10, par_et4 = 10;
    bool par_pl1 = 0, par_pl2 = 0, par_pl3 = 0, par_pl4 = 1;

    cin >> par_et1;

    int ark_et1 = 20, ark_et2;
    bool ark_pl1 = 0, ark_pl2 = 1;

    cin >> ark_et2;

    // вывод информации

    cout << "Жк Аркадиан, его информация: " << endl;
    cout << "Дом " << 1 << "имеет этажность: " << ark_et1 << endl;
    cout << "Дом " << 2 << "имеет этажность: " << ark_et2 << endl;

    cout << "Наличие пл: " << ark_pl1 << endl;
    cout << "Наличие пл: " << ark_pl2 << endl;
}