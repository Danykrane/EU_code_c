#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    /*
    Щука Москва 8-(958)-456-53-12
    Щука Сенеж 8-(912)-430-55-12
    */
   

    map<string, map<string, string>> turbase;

    turbase["Щука"].insert(make_pair("Москва", "8-(958)-456-53-12"));
    turbase["Щука"].insert(make_pair("Сенеж", "8-(8675)-456-53-12"));
    // turbase["Щука"]["Сенеж"] = "8-(454)-456-53-12";
    //  turbase["Щука"] = {"Сенеж", "8-(958)-336-53-12"};

    // cout << turbase["Щука"]["Москва"] << endl;
    for (const auto &it : turbase)
    {
        for (auto &ukaz : it.second)
        {
            cout << it.first << " " << ukaz.first << " " << ukaz.second << endl;
        }
    }

    // for (auto it = turbase.begin(); it != turbase.end(); it++)
    // {
    //     cout << it->first << " " << it->second.begin() << endl;
    // }
}