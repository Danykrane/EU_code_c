#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

int main()
{
    list<char> symb = {'s', '1', '3', 'a', 'q', 'u'};

    cout << "Адресэлем списка" << endl;
    for (auto it = symb.begin(); it < symb.end(); it++)
    {
        cout << it << " ";
    }

    cout << endl;
    vector<char> symb1 = {'s', '1', '3', 'a', 'q', 'u'};
    cout << "Адресэлем в-ра" << endl;
    for (auto it = symb1.begin(); it != symb1.end(); it++)
    {
        cout << it << " ";
    }
}