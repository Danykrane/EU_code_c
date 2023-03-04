#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int range_count(vector<int> &ages, int n, int l, int r)
{
    int count = 0;
    for_each(ages.begin(), ages.end(), [&count, l, r](int val)
             { if (val >= l && val <= r) count++; });
    return count;
}

int main()
{
    vector<int> ages = {32, 33, 18, 22, 27, 25};

    int i = 20, j = 30;
    cout << range_count(ages, ages.size(), i, j) << endl;

    i = 0, j = 100;
    cout << range_count(ages, ages.size(), i, j) << endl;

    i = 32, j = 32;
    cout << range_count(ages, ages.size(), i, j) << endl;
    return 0;
}