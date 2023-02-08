#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    map<string, int> animals;
    animals["Lion"] = 12;
    animals["Zebra"] = 2;
    animals["Bege"] = 5;

    cout << animals["Zebra"] << endl;

    for_each(animals.begin(), animals.end(), [](pair<string, int> &val)
             { cout << val.first << " " << val.second << endl; });
}
