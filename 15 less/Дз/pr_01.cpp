#include <iostream>
using namespace std;

int main()
{

    int cnt = 12;
    int *ptr = &cnt;

    cout << ptr << endl;
    cout << *ptr << endl;

    int **ukaz = &ptr;

    cout << *(*ukaz) << endl;
    int ***ukaz3 = &ukaz;
    cout << *(*(*ukaz3)) << endl;
}