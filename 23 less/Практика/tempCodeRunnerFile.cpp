
#include <iostream>
#include <stack>
#include <deque>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    // stack<double> wes = {1,
    //                      2,
    //                      3,
    //                      4};
    // stack<double, vector<double>> wes; // адаптек стека на основе вектора
    // stack<double, list<double>> wes;   // адаптек стека на основе списка
    // stack<double, deque<double>> wes;  // адаптек стека на основе дэка
    stack<double> wes; // адаптек стека на основе дэка
    int col;
    cin >> col;
    double val;
    while (col--)
    {
        cin >> val;
        if (val < 0)
            val = 0;
        wes.push(val);
    }

    // for (auto &it : wes)
    // {
    //     cout << it << " ";
    // }

    while (!wes.empty())
    {
        cout << wes.top() << " ";
        wes.pop();
    }

    // for_each(wes.begin(), wes.end()) итераторов нет
}