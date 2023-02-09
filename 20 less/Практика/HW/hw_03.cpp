#include <iostream>
#include <iomanip>
#include <chrono>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Timer
{
    chrono::steady_clock::time_point begin;
    chrono::steady_clock::time_point end;

public:
    void start()
    {
        begin = chrono::steady_clock::now();
    }

    void stop()
    {
        end = chrono::steady_clock::now();
        cout << "\nCode time: " << ((end - begin).count())
             << endl;
    }

    double get_time()
    {
        return static_cast<double>((end - begin).count()) / 1000000000; // подсчет разницы c
    }
};

int main()
{

    /*
    Стоимость авиабилетов из москвы

    Минск - 1750
    Сеул - 30584
    Мадрид - 13979
    Ибиица - 13295
    Милан - 7614
    */
    Timer time_vec, time_map;

    int size = 5;
    vector<pair<string, int>> flights_vec = {
        {"Минск", 1750},
        {"Сеул", 30584},
        {"Мадрид", 13979},
        {"Ибиица", 13295},
        {"Милан", 7614}};

    cout << "Города и их стоимость\n"
         << endl;
    for_each(flights_vec.begin(), flights_vec.end(), [](pair<string, int> data)
             { cout << data.first << " " << data.second << endl; });

    int money;
    cout << "\nВведите кол-во денег" << endl;
    cin >> money;

    time_vec.start();
    int cnt = 0;
    cout << "\nПодсчет билетов, которые можно купить\nЗа такую сумму мы полетим\n=>"
         << endl;

    if (any_of(flights_vec.begin(), flights_vec.end(), [money](pair<string, int> data)
               { return money >= data.second; }))
    {
        for_each(flights_vec.begin(), flights_vec.end(), [money, &cnt](pair<string, int> data)
                 {
                       if (money >= data.second)
                       {
                           cout << data.first<<" со стоимостью "<<data.second<<endl;
                           cnt++;
                       } });
    }
    else
        cout << "Никуда" << endl;
    ;

    cout << "Итого: " << cnt << " городов" << endl;

    time_vec.stop();

    time_map.start();
    map<string, int> flights_map;
    flights_map["Минск"] = 1750;

    time_map.stop();
}