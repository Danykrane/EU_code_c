#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> vals = {12, -2, 34, 4, 65, 15, 6, 71, 48, 1, 2};
    cout << "До сортировки" << endl;
    for_each(vals.begin(), vals.end(), [](int val)
             { cout << val << " "; });
    cout << "\nПосле сортировки" << endl;

    sort(vals.begin(), vals.end()); // сорт по возр

    for_each(vals.begin(), vals.end(), [](int val)
             { cout << val << " "; });
    cout << "\nПосле сортировки по убыванию" << endl;
    sort(vals.begin(), vals.end(), [](int val1, int val2)
         { return (val1 > val2); }); // сорт по убыванию

    for_each(vals.begin(), vals.end(), [](int val)
             { cout << val << " "; });
    cout << "\nПосле сортировки остатков на 10 по убыванию" << endl;
    sort(vals.begin(), vals.end(), [](int val1, int val2)
         { return (val1 % 10 > val2 % 10); }); // сорт по убыванию

    for_each(vals.begin(), vals.end(), [](int val)
             { cout << val << " "; });
}
