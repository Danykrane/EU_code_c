#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> vals(size);

    for_each(vals.begin(), vals.end(), [](int &val)
             { cin >> val; });

    for_each(vals.begin(), vals.end(), [](int val)
             { cout << val << " "; });
    cout << endl;
    // int del_val;
    // cin >> del_val;

    // vector<int>::iterator pos
    // auto pos = remove_if(vals.begin(), vals.end(), [](int val)
    //                      { return val <= 5; });
    // vals.erase(pos, vals.end());

    vals.erase(remove_if(vals.begin(), vals.end(), [](int val)
                         { return val <= 5; }),
               vals.end());

    cout << "После удаления" << endl;

    for_each(vals.begin(), vals.end(), [](int val)
             { cout << val << " "; });
}
