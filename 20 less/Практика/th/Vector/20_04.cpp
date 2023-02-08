#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool more(int a, int b)
{
    return (a < b);
}

bool les(int a, int b)
{
    return (a > b);
}

int main()
{
    srand(time(0));
    int size = 250;
    vector<int> data(size);
    for (auto &val : data)
    {
        val = rand() % 100 - 30;
    }

    for_each(data.begin(), data.end(), [](int val)
             { cout << val << " "; });

    sort(data.begin(), data.end(), [](int val1, int val2)
         { return (val1 > val2); });
    cout << endl
         << "Сортировка по убыванию" << endl;
    for_each(data.begin(), data.end(), [](int val)
             { cout << val << " "; });

    stable_sort(data.begin(), data.end(), les); // при наличии повт элементов
    cout << endl
         << "Сортировка по возрастанию" << endl;
    for_each(data.begin(), data.end(), [](int val)
             { cout << val << " "; });
}
