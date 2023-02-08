#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> srcVec;
    for (int val = 0; val < 10; val++)
    {
        srcVec.push_back(val);
    }

    int lowerBound = 0, upperBound = 0;
    cout << "Enter the value range: ";
    cin >> lowerBound >> upperBound;

    int result =
        count_if(srcVec.begin(), srcVec.end(),
                 [lowerBound, upperBound](int _n)
                 {
                     return lowerBound <= _n && _n < upperBound;
                 });
    cout << result << endl;

    return 0;
}