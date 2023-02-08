
#include <iostream>

using namespace std;

auto sumVal([](int test1, int test2)
            { return test1 + test2; });

auto readVal([](int &test1, int &test2)
             { cin >> test1 >> test2; });

int main()
{
    int a, b;

    readVal(a, b);

    cout << sumVal(a, b) << endl;
}