#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <chrono>

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
    list<int> test;

    cout << "input num" << endl;
    int number;
    cin >> number;
    while (number != -1)
    {
        test.push_back(number);
        cin >> number;
    }
    cout << endl;
    Timer timel, timeV;
    timel.start();
    list<int> symb;
    symb = test;
    // for (const auto &data : test)
    // {
    //     symb.push_back(data);
    // }
    timel.stop();

    for (const auto &data : symb)
    {
        cout << data << " ";
    }
    int cnt = count_if(symb.begin(), symb.end(), [](int val)
                       { return val > 0; });

    (cnt > symb.size() - cnt) ? cout << "Больше положит" : (cnt = symb.size() - cnt) ? cout << "Равное"
                                                                                     : cout << "Отрицательных больше";

    // timel.stop();
    timeV.start();
    vector<int> vecS;
    for (const auto &data : symb)
    {
        vecS.push_back(data);
    }
    timeV.stop();
    // timeV.start();
    for (const auto &data : vecS)
    {
        cout << data << " ";
    }
    int cntV = count_if(vecS.begin(), vecS.end(), [](int val)
                        { return val > 0; });

    (cntV > vecS.size() - cnt) ? cout << "Больше положит" : (cntV = vecS.size() - cnt) ? cout << "Равное"
                                                                                       : cout << "Отрицательных больше";
    // timeV.stop();
}