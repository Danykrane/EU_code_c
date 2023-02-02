#include <iostream>
#include <string>

using namespace std;

int main()
{
    pair<string, string> translate;
    translate = make_pair("Бежать", "Run");

    cout << translate.first << " " << translate.second;
}