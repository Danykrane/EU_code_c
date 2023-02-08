#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class MyLambda
{
public:
    void operator()(int _x) const { cout << _x << " "; }
};

int main()
{
    vector<int> srcVec;
    for (int val = 0; val < 10; val++)
    {
        srcVec.push_back(val);
    }

    for_each(srcVec.begin(), srcVec.end(), MyLambda());
    cout << endl;

    return 0;
}