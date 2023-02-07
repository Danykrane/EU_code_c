#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> new_vec(const vector<int> &vals, bool (*compare)(int elem))
{
    vector<int> rez;
    for (const auto &val : vals)
    {
        if (compare(val))
            rez.push_back(val);
    }
    return rez;
}

void show(const vector<int> &data)
{
    for (const int &val : data)
    {
        cout << val << " ";
    }
    cout << endl;
}

bool chetn(int a)
{
    return a % 2 == 0;
}

bool nechet(int a)
{
    return a % 2 != 0;
}

bool equal(int a)
{
    return a == 5;
}

int main(int argc, char **argv)
{

    cout << "Работа программы" << endl;

    vector<int> vals(argc);
    int i = 0;
    for (auto &data : vals)
    {
        data = atoi(argv[i++]);
    }

    cout << "Четные элементы: " << endl;
    show(new_vec(vals, chetn));

    cout << "Не четные элементы: " << endl;
    show(new_vec(vals, nechet));

    cout << "Равные 5 элементы: " << endl;
    show(new_vec(vals, equal));
}