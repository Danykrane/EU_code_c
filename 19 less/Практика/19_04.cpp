#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<string, int> build;
    string name;
    int heigh;

    cin >> name;
    while (name != "exit")
    {
        cin >> heigh;
        build[name] = heigh;

        cout << "Какое здание добавить?" << endl;
        cin >> name;
    }

    for (const auto &it : build)
    {
        cout << it.first << " " << it.second << endl;
    }

    string what;
    cin >> what;
    if (auto pos = build.find(what); build.find(what) != build.end())
        cout << "Здание " << what << " имеет высоту " << pos->second << endl;
}