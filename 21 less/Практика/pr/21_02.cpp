#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    list<int> symb = {1, -12, 34, 8, 34};
    // cout << symb[1];
    auto uk = symb.begin();
    cout << *uk << endl;
    uk++;
    cout << *uk << endl;
    // cout << *(uk + 1) << endl;
    advance(uk, 3);
    cout << *uk << endl;
    advance(uk, -1);
    cout << *uk << endl;
    advance(uk, 2);
    cout << *uk << endl;
}