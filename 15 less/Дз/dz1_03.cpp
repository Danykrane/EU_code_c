#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Corsina
{
    vector<double> magasine;
    int size;

public:
    Corsina(int size = 0) : size(size)
    {
        if (size < 0)
            size = 0;
    }

    void readS()
    {
        cout << "Укажите количество товаров в корзине: " << endl;
        cin >> size;
    }
    void read()
    {
        if (size == 0)
            readS();

        magasine.resize(size);
        scan();
    }
    void check()
    {
        int cnt = 0;
        for (auto &iter : magasine)
        {
            if (iter > 500)
                iter = 0;
            cnt++;
        }
        sort(magasine.begin(), magasine.end());
        magasine.erase(magasine.begin(), magasine.begin() + cnt);
    }
    void scan()
    {
        for (auto &iter : magasine)
        {
            cin >> iter;
        }
    }

    double sum()
    {
        double rez = 0;
        for (auto &iter : magasine)
        {
            rez += iter;
        }
        return rez;
    }
};

void show(const double num)
{
    cout << "Итоговая стоимость: " << num << endl;
}

int main()
{
    Corsina perv;
    perv.read();
    perv.check();
    show(perv.sum());
}