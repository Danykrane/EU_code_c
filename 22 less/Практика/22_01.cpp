#include <iostream>

using namespace std;

int main()
{
    int val = 192;              // 11000000
    cout << (val << 2) << endl; // 192 * 4 = 768
    cout << sizeof(val) << endl;
    cout << (val << 26) << endl; // 192 * 2^26

    long int val2 = val;
    cout << (val2 << 26) << endl;
}