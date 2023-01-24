#include <iostream>
#include <vector>

using namespace std;
class Corsina
{
    vector<double> magasine; //поле храния вектора значений
    int size;                //поле размерности вектора значений

    void readS(); // прототип метода считывания размера вектора
    void scan();  // прототип метода заполнения вектора

public:
    Corsina(int size = 0); //прототип конструктора со значением по умолчанию в разделе объявления
    void read();           // прототп метода считывания
    double sum();          // прототип метода подсчета суммы
};

void show(const double &); //прототип функции вывода значений

void show(const double &num)
{
    cout << "Итоговая стоимость: " << num << endl;
}

int main()
{
    Corsina perv; //создадим объект класса Corsina
    perv.read();
    show(perv.sum());
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

double Corsina::sum()
{
    double rez = 0;
    for (auto &iter : magasine)
    {
        rez += iter;
    }
    return rez;
}
