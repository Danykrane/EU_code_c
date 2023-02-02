#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int mediana(vector<int> &test)
{
    int rez = test.size() == 1 ? test.at(test.size() / 2) : test.at(test.size() / 2 - 1);
    auto pos = remove(test.begin(), test.end(), rez);
    test.erase(pos, test.end());
    return rez;
}

void marPlace(int, int);
int main()
{

    unsigned int n, m;
    cin >> n >> m;
    int col_marsh = ceil(static_cast<double>(n) / m);

    int col = col_marsh;
    int vm = m;
    int pass = n;
    int cnt = 0;

    while (cnt != col_marsh)
    {

        int p;
        pass - vm > 0 ? p = m : p = pass;

        marPlace(p, m);

        pass -= p;
        cnt++;
    }
}

void marPlace(int k_pass, int col_mest)
{

    vector<int> nums(col_mest + 1);
    int cnt = 1;
    for (auto &it : nums)
    {
        it = cnt++;
    }
    int num = col_mest;

    vector<int> pos;
    while (k_pass != 0)
    {
        pos.push_back(mediana(nums));
        k_pass--;
    }

    for (const auto &it : pos)
    {
        cout << it << endl;
    }
}