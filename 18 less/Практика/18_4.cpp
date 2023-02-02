#include <iostream>
#include <vector>
using namespace std;

class summator : private vector<int>
{
public:
    summator(const vector<int> &ini)
    {
        for (auto &x : ini)
            this->push_back(x);
    }

    int operator()(bool even)
    {
        int sum = 0;
        auto it = begin();
        if (even)
            it++;
        for (it; it != end(); it++)
        {
            sum += *it++;
            if (it == end())
                break;
        }
        // auto i = begin();
        // if (even)
        //     i++;
        // while (i < end())
        // {
        //     sum += *i++;
        //     if (i == end())
        //         break;
        //     i++;
        // }
        return sum;
    }

    ~summator()
    {
        cout << "Объект удален" << endl;
    }

    int funcCalc(bool even)
    {
        int temp;
        return temp;
    }
};

int main()
{
    vector<int> values{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << summator(values)(true) << endl; // локальное создание объекта толлько на время работы ф-ии вывода //функтор

    cout << "Hey" << endl;
    summator rez(values);

    cout << summator(values).funcCalc(true) << endl; // объект и от объекта вызыввется ф-ия
    // cout << "сумма чётных = " << sums(true) << endl
    // << "сумма нечётных = " << sums(false) << endl;
}