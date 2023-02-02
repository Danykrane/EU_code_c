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

    vector<pair<string, string>> vocabulary = {// объявили, что будем использовать вектор пар
                                               {"wow", "вау"},
                                               {"run", "бежать"},
                                               {"run", "прыгать"},
                                               {"speak", "говорить"}};
    cout << "До удадления размер равен: " << vocabulary.size() << endl;
    for (auto iter : vocabulary)
    {
        cout << iter.first << " " << iter.second << endl;
    }

    for (auto &iter : vocabulary)
    {
        if (iter.first == "run" && iter.second == "прыгать")
        {
            cout << "Данная фраза неправильна" << endl;
        }
    }

    auto pos_del = remove_if(vocabulary.begin(), vocabulary.end(), rem);
    vocabulary.erase(pos_del, vocabulary.end());

    cout << "После удадления размер равен: " << vocabulary.size() << endl;
    for (auto iter : vocabulary)
    {
        cout << iter.first << " " << iter.second << endl;
    }
}