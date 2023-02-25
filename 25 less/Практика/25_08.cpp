#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
// есть Столбец датаеста Автор - Стоимость
// вывести все значения у данного ключа
int main()
{
    multimap<string, double> data_set;
    data_set.insert(make_pair("Alex", 1200));
    data_set.insert(make_pair("Alex", 2500));
    data_set.insert(make_pair("Alex", 12));
    data_set.insert(make_pair("Melman", 48));
    data_set.insert(make_pair("Alex", 23.76));
    data_set.insert(make_pair("Gloria", 23.76));

    cout << endl;
    string aut;
    cout << "Введите ключ выборки" << endl;
    cin >> aut;
    if (data_set.find(aut) != data_set.end())
    {

        auto elem_data = data_set.equal_range(aut);
        cout << "Автор " << aut << " продал картины стоимостью: " << endl;

        for_each(elem_data.first, elem_data.second, [](pair<string, double> test)
                 { cout << test.second << endl; });
    }
    else
        cout << "Такого ключа нет" << endl;
}