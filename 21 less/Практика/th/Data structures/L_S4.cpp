#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    //    list<тип данных><имя контейнера>;
    list<double> weights = {1.34, 0.12, -4.12, 7.12}; // объявили + инициализировали список

    auto elemVtor = next(weights.begin(), 3);
    cout << *elemVtor << endl;
    auto elemPosl = prev(weights.end(), 1);

    auto pos = weights.begin();
    advance(pos, 13); // увеличили
    cout << *pos << endl;
    advance(pos, -13); // увеличили
    cout << *pos << endl;
    int cnt = 0;
    cnt = count_if(weights.begin(), weights.end(), [](auto val)
                   { return val > 0; });
    cout << cnt << endl;

    // advance(weights, -5); // вернули в исходную позиции
}