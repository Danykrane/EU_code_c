#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums = {3, -5, 6, -6, 8, -1, 2, -5};
    for (const int &vals : nums)
    {
        cout << vals << " ";
    }
    cout << endl;
    int sumvals = 0;
    for_each(nums.begin(), nums.end(), [&sumvals](int val)
             { sumvals += val; });
    cout << sumvals << endl;
}