#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

void show(pair<string, int> test)
{
    cout << test.first << " " << test.second;
}

int main()
{
    map<string, int> animals;
    animals["Lion"] = 12;
    animals["Zebra"] = 2;
    animals["Bege"] = 5;

    cout << animals["Zebra"] << endl;

    for (const auto &n : animals)
        std::cout << n.first << " = " << n.second << "; ";
    cout << endl;

    for (auto iter = animals.begin(); iter != animals.end(); iter++)
    {
        cout << iter->first << " " << iter->second;
    }
    cout << endl;
    
    for_each(animals.begin(), animals.end(), show);
}
