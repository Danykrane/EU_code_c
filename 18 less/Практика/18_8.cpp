#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool rem(pair<string, string> test)
{
    return test.first == "run" && test.second == "прыгать";
}

int main()
{

    /*

    Бежать - Run
    Смеяться - Cheer
    Смеяться - Joy
    Сидеть - Seat

    */

    vector<pair<pair<string, string>, string>> vocabulary = {
        // вектор пар из пар
        // объявили, что будем использовать вектор пар
        {{"wow", "уоу"}, "вау"},
        {{"run", "ран"}, "бежать"},
    };
    cout << "До удадления размер равен: " << vocabulary.size() << endl;
    for (auto iter : vocabulary)
    {
        cout << iter.first.first << " " << iter.first.second << " " << iter.second << endl;
    }
}