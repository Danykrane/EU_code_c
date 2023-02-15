#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sum(const vector<int> &vals)
{
    int summa = 0;
    for (const auto &val : vals)
    {
        summa += val;
    }
    return summa;
}

int main(int argc, char **argv)
{

    int x = 3;
    void *a = (void *)&x;
    cout << &x << endl;
    cout << a << endl;

    // argc - количество аргументов
    // argv - масссив аргументов
    cout << "Работа программы" << endl;

    vector<int> vals(argc);
    int i = 0;
    for (auto &data : vals)
    {
        data = atoi(argv[i++]);
    }
    int (*ptr_sum)(const vector<int> &);
    ptr_sum = sum;

    cout
        << "Сумма введенных значений =" << ptr_sum(vals);
}