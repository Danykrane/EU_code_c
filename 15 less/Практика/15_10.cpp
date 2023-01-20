#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool rem(double val)
{
    if (val < 0)
        return 1;
}

int main()
{

    vector<double> cats = {-4, 3.12, -1, 4.56, -5};
    sort(cats.begin(), cats.end());

    cout << cats.size() << endl;

    auto ptr = remove_if(cats.begin(), cats.end(), rem);
    cats.erase(ptr, cats.end());

    for (auto it : cats)
    {
        cout << it << " ";
    }
}