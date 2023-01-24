#include <iostream>
#include <vector>

using namespace std;
void read(int &);                                  //функция считывания размерноси вектора
void read(vector<double> &);                       //функция считывания дынных в вектор
double *summ(const vector<double> &, const int &); //функция подсчета суммы внутри вектора
void show(const double *);                         //функция вывода указателя
void show(const vector<double> &);                 //функция вывода данных вектора
void destroy(double *);                            //функция удаления памяти по указателю

int main()
{
    int col;
    read(col);
    vector<double> magasine(col);
    read(magasine);
    double *sum = summ(magasine, col);
    show(sum);
    destroy(sum);
}

void read(vector<double> &test)
{
    for (auto iter = test.begin(); iter != test.end(); iter++)
    {
        cin >> *iter;
    }
}

void read(int &val)
{
    cout << "Укажите количество товаров в корзине: " << endl;
    cin >> val;
}

double *summ(const vector<double> &test, const int &size)
{
    double *rez = new double;
    for (auto iter = test.begin(); iter != test.end(); iter++)
    {
        *rez += *iter;
    }

    return rez;
}

void show(const double *num)
{
    cout << "Итоговая стоимость: " << *num << endl;
}

void show(const vector<double> &test)
{
    for (auto iter = test.begin(); iter != test.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

void destroy(double *ptr)
{
    delete ptr;
}