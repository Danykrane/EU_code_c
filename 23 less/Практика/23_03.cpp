
#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<double> wes; // адаптек очереди на основе дэка
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
        // cout << wes.front() << " ";
        cout << wes.back() << endl;
        wes.pop();
    }

    // for_each(wes.begin(), wes.end()) итераторов нет
}