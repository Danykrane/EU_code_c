#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int col;
    cout << "Укажите количество товаров в корзине: " << endl;
    cin >> col;
    vector<double> magasine(col);

    for (auto iter = magasine.begin(); iter != magasine.end(); iter++)
    {
        cin >> *iter;
    }

    double sum = 0;

    for (auto iter = magasine.begin(); iter != magasine.end(); iter++)
    {
        sum += *iter;
    }

    cout << "Итоговая стоимость: " << sum << endl;
}