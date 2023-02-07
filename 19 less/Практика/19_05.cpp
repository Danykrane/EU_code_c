#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<string, int> build{
        {"bu", 888},
        {"Pe", 545}};

    map<string, int> cars{
        {"Al", 230},
        {"Au", 120}};

    string what;
    cin >> what;

    cars.swap(build);

    for (const auto &it : build)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (const auto &it : cars)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << build.size() << endl;

    if (build.count(what) != 0)
    {
        cout << build.at(what) << endl;
    }

    if (auto pos = build.find(what); build.find(what) != build.end())
        cout << "Здание " << what << " имеет высоту " << pos->second << endl;
}