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
    sort(nums.begin(), nums.end());
    for (const int &vals : nums)
    {
        cout << vals << " ";
    }

    cout << endl;
    cout << *(upper_bound(nums.begin(), nums.end(), 6)) << endl;
    cout << *(lower_bound(nums.begin(), nums.end(), 3)) << endl;

    cout << endl;

    cout << *(find(nums.begin(), nums.end(), 6) - 1) << endl;

    pair<int, int> min_max_val;

    min_max_val.first = *min_element(nums.begin(), nums.end());
    min_max_val.second = *max_element(nums.begin(), nums.end());

    cout << "min = " << min_max_val.first << " max = " << min_max_val.second << endl;

    pair<vector<int>::iterator, vector<int>::iterator> minMax = minmax_element(nums.begin(), nums.end());
    const auto p = minmax_element(nums.begin(), nums.end());
    cout << *p.first << " " << *p.second << endl;

    // min_max_ukaz = minmax_element(nums.begin(), nums.end());
    min_max_val = minmax(8, 2);
    cout << "min = " << min_max_val.first << " max = " << min_max_val.second << endl;

    cout << "Индекс числа 6: " << find(nums.begin(), nums.end(), 6) - nums.begin();
}