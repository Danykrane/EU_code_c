#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Corsina
{
    vector<double> magasine; //поле храния вектора значений
    int size;                //поле размерности вектора значений

    void readS(); // прототип метода считывания размера вектора
    void scan();  // прототип метода заполнения вектора

public:
    Corsina(int size = 0);
    void read();  // прототп метода считывания
    double sum(); // прототип метода подсчета суммы

    void show();
    void razm();

    vector<double> getV();
    void setv(vector<double>);
};

void show(const double &); //прототип функции вывода значений
void join(Corsina &, Corsina &);

int main()
{
    Corsina perv, vtor;
    perv.read();
    vtor.read();
    join(perv, vtor);
    perv.show();
    perv.razm();
}
vector<double> Corsina::getV()
{
    return magasine;
}

void Corsina::setv(vector<double> test)
{
    magasine = test;
}
Corsina::Corsina(int size) : size(size) // определение конструктора
{
    if (size < 0)
        size = 0;
}

void Corsina::readS()
{
    cout << "Укажите количество товаров в корзине: " << endl;
    cin >> size;
}
void Corsina::read()
{
    if (size == 0)
        readS();

    magasine.resize(size);
    scan();
}

void Corsina::scan()
{
    for (auto &iter : magasine)
    {
        cin >> iter;
    }
}

void Corsina::show()
{
    cout << "Новая корзина: " << endl;
    for (auto &iter : magasine)
    {
        cout << iter << " ";
    }
    cout << endl;
}

void Corsina::razm()
{
    cout << "Размер корзины: " << magasine.size() << endl;
}

void show(const double &num)
{
    cout << "Итоговая стоимость: " << num << endl;
}

void join(Corsina &obj1, Corsina &obj2)
{
    vector<double> one = obj1.getV();
    vector<double> two = obj2.getV();
    for (auto &iter : two)
    {
        one.push_back(iter);
    }
    obj1.setv(one);
}