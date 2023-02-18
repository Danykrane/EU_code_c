
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{

    set<double> wes = {3, 12, -5, 4, 8};
    for_each(wes.begin(), wes.end(), [](double val)
             { cout << val << " "; });
    cout << endl;
    for (auto &it : wes)
    {
        cout << it << " ";
    }
}