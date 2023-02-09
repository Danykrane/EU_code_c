#include <iostream>
#include <iomanip>
#include <chrono>
#include <vector>

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
        cout << "\nCode time: " << ((end - begin).count()) // наносекунды
             << endl;
    }

    double get_time()
    {
        return static_cast<double>((end - begin).count()) / 1000000000; // подсчет разницы cекунды
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
    vector<int> vals = {1, 2, 4, 5};
}