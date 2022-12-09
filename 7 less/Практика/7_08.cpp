#include <iostream>
using namespace std;

int main()
{
    int *rost = new int;
    double *ves = new double;
    int *vozr = new int;

    cin >> *rost >> *ves >> *vozr;
    cout << *rost << " " << *ves << " " << *vozr;

    delete rost, ves, vozr;
}