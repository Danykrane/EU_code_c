#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
// есть Столбец датаеста Автор - Стоимость
int main()
{
    multimap<string, double> data_set;
    int col_pic;
    cin >> col_pic;
    for (int i = 0; i < col_pic; i++)
    {
        string name;
        double price;
        cin >> name >> price;
        data_set.insert(make_pair(name, price));
    }
    cout << endl;
    for_each(data_set.begin(), data_set.end(), [](pair<string, double> test)
             { cout << test.first << " " << test.second << endl; });
}