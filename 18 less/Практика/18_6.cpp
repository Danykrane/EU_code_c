#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    /*

    Бежать - Run
    Смеяться - Cheer
    Смеяться - Joy
    Сидеть - Seat

    */

    vector<pair<string, string>> vocabulary; // объявили, что будем использовать вектор пар
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Введите слово и его перевод" << endl;
        string str1, str2;
        cin >> str1 >> str2;
        vocabulary.push_back(make_pair(str1, str2));
    }

    for (auto iter : vocabulary)
    {
        cout << iter.first << " " << iter.second << endl;
    }
}