
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout << *(vec.begin() + 1) << endl;

    for (auto it = vec.begin() + 4; it != vec.end(); it += 2)
    {
        cout << *it;
    }
}
