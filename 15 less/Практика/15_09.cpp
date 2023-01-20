#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<double> cats = {-4, 3.12, -1, 4.56, -5};
    sort(cats.begin(), cats.end());

    cout << cats.size() << endl;

    for (auto it = cats.begin(); it != cats.end(); it++)
    {
        if (*it < 0)
        {
            *it = 0;
        }
    }
    
    for (auto it : cats)
    {
        cout << it << " ";
    }

    int cnt = count(cats.begin(), cats.end(), 0);
    cout << cnt << endl;

    cats.erase(cats.begin(), cats.begin() + cnt);

    for (auto it : cats)
    {
        cout << it << " ";
    }
}