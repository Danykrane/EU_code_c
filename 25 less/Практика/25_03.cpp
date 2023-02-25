
#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<string, int> trans;
    trans["Alex"] = 1200;
    trans["Alex"] = 2400;
    trans["Melman"] = 1500;

    cout << trans["Alex"] << endl;
    cout << trans["Melman"] << endl;
}