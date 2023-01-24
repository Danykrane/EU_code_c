#include <string>
#include <iostream>
#include <vector>

using namespace std;

string change(string str)
{
    vector<string> vals = {"name", "date"};
    for (auto it : vals)
    {
        string begin = "<" + it + ">";
        string end = "</" + it + ">";
       
        if (str.find(begin) != string::npos && str.find(end) != string::npos)
        {
            return str.substr(str.find(begin) + begin.size(), str.find(end) - begin.size() - str.find(begin));
        }
    }
    return " ";
}

int main()
{
    string data[] = {
        "        <name>Алексеев Иван Петрович</name>",
        "        <date>1976-01-01</date>",
        "        <hours-worked>25</hours-worked>",
        "<car-true>YES</car-true>",
        "</Table>"};

    cout << change(data[1]) << endl;
}
