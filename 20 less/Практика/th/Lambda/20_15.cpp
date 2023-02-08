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

    int result = count_if(srcVec.begin(), srcVec.end(), [](int _n)
                          { return (_n % 2) == 0; });

    cout << result << endl;

    return 0;
}