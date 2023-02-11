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
    list<double> ves;
    ves = weights;
    cout << endl;
    cout << ves.front() << endl;

    ves.front() = 22;
    cout << ves.front() << endl;
    cout << weights.front() << endl;
}