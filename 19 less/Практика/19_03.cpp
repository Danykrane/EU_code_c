#include <iostream>
#include <vector>

using namespace std;

int main()
{
    pair<string, string> tr;
    tr = make_pair("Азб", "Voc");
    cout << tr.first << " " << tr.second << endl;

    vector<pair<string, string>> trans;
    trans.push_back(make_pair("Азб", "Voc"));
    trans.push_back(make_pair("бег", "Run"));

    for (const auto &it : trans)
    {
        cout << it.first << " " << it.second << endl;
    }

    pair<string, vector<string>> translate;
    translate.first = "Бегать";
    translate.second.push_back("Run");
    translate.second.push_back("Jump");

    cout << translate.first << " ";
    for (auto &it : translate.second)
    {
        cout << it << " ";
    }
}
