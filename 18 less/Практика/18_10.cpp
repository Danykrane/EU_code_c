#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vals{1, 2, 3, 4, 5, 4, 7};

    auto pos = vals.begin();
    for (auto &it : vals)
    {
        if (it == 4)
            vals.erase(pos);
        pos++;
    }

    // for (auto it = vals.begin(); it != vals.end(); it++)
    // {
    //     if (*it == 4)
    //         vals.erase(it);
    // }

    for (const auto &it : vals)
    {
        cout << it << " ";
    }
}