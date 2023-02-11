#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //    list<тип данных><имя контейнера>;
    list<double> weights = {1.34, 0.12, 0.12, 0.12, 4.12, 2.12}; // объявили + инициализировали список

    for (auto &data : weights)
    {
        cout << data << " ";
    }
    cout << weights.size() << endl;
    weights.unique();
    cout << weights.size() << endl;
    for (auto &data : weights)
    {
        cout << data << " ";
    }
    cout << endl;
    auto elem = std::next(weights.begin());
    list<double> ves = {5.12, 1.12};
    weights.merge(ves);
    for (auto &data : weights)
    {
        cout << data << " ";
    }
}