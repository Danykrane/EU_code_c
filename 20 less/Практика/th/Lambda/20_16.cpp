#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> srcVec;
    for (int val = 0; val < 10; val++)
    {
        srcVec.push_back(val);
    }

    vector<double> destVec;
    transform(srcVec.begin(), srcVec.end(),
              back_inserter(destVec), [](int _n) -> double
              {
		if (_n < 5)
			return _n + 1.0;
		else if (_n % 2 == 0)
			return _n / 2.;
		else
			return _n * _n; });

    for (const auto &data : destVec)
    {
        cout << data << " ";
    }

    return 0;
}