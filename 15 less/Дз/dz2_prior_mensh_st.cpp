#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Corsina
{
    vector<double> magasine; //поле храния вектора значений
    int size;                //поле размерности вектора значений
    double budget;
    double fullbudget;

    void readS(); // прототип метода считывания размера вектора
    void scan();  // прототип метода заполнения вектора

public:
    Corsina(int size);
    Corsina(int size = 0, double fullbudget = 0);
    void read();  // прототп метода считывания
    double sum(); // прототип метода подсчета суммы

    void setB();
    void setBudg();
    void format();
    void show();
};

void show(const double &); //прототип функции вывода значений

int main()
{
    Corsina perv; //создадим объект класса Corsina
    perv.read();
    show(perv.sum());

    perv.setBudg();
    perv.format();
    show(perv.sum());
}

Corsina::Corsina(int size) : size(size) // определение конструктора
{
    if (size < 0)
        size = 0;
}
Corsina::Corsina(int size, double fullbudget) : size(size), fullbudget(fullbudget) // определение конструктора
{
    if (size < 0)
        size = 0;

    if (budget < 0)
        budget = 0;
}
void Corsina::setB()
{
    cout << "Введите макс стоимость товаров " << endl;
    cin >> budget;
}

void Corsina::setBudg()
{
    cout << "Введите бюджет " << endl;
    cin >> fullbudget;
}
void Corsina::format()
{
    cout << "Оставляем товары с низкой стоимостью " << endl;
    sort(magasine.begin(), magasine.end());
    int cnt = 0;
    double sum = 0;
    for (auto &iter : magasine)
    {
        if (sum <= fullbudget)
        {
            sum += iter;
        }
        else
        {
            cnt++;
        }
    }
    cnt++;
    cout << "Корзина прошла форматирование, удалено " << cnt << " товара" << endl;
    magasine.resize(magasine.size() - cnt);
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

double Corsina::sum()
{
    double rez = 0;
    for (auto &iter : magasine)
    {
        rez += iter;
    }
    return rez;
}

void Corsina::show()
{
    cout << "Новая корзина: " << endl;
    for (auto &iter : magasine)
    {
        cout << iter << " ";
    }
}

void show(const double &num)
{
    cout << "Итоговая стоимость: " << num << endl;
}