#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(int);

int main()
{
    vector<int> vals = {1, 2, 3, 4, 5, 6, 7, 8};

    for_each(vals.begin(), vals.end(), show);
}

void show(int val)
{
    cout << val << " ";
}