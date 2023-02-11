#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //    list<тип данных><имя контейнера>;
    list<double> weights = {1.34, 0.12, 4.12, 2.12}; // объявили + инициализировали список

    for (auto &data : weights)
    {
        cout << data << " ";
    }

    cout << endl;

    for (auto it = weights.begin(); it != weights.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    
    for_each(weights.begin(), weights.end(), [](auto val)
             { cout << val << " "; });
}