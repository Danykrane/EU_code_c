#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> vals = {1, 2, 3, 4, 5, 5, 6, 7, 8, 1, 2};

    int sum = 0;
    for_each(vals.begin(), vals.end(), [&sum](int val)
             { sum += val; });
    cout << sum << endl;
    int sum2 = 0;
    
    for (const int &data : vals)
    {
        sum2 += data;
    }

    cout << sum2 << endl;
    for_each(vals.begin(), vals.end(), [](int val)
             { cout << val << " "; });
}
