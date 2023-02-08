#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> srcVec;
    for (int val = 0; val < 10; val++)
    {
        srcVec.push_back(val);
    }

    for_each(srcVec.begin(), srcVec.end(), [](int _n)
             { cout << _n << " "; });
    cout << endl;

    return 0;
}