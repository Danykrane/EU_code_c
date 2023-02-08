
#include <iostream>

using namespace std;

auto sumVal([](int test1, int test2)
            { return test1 + test2; });
            
class Lambda
{

public:
    int operator()(int test1, int tst2)
    {
        return test1 + tst2;
    }
};
int main()
{
    int a, b;
    cin >> a >> b;
    cout << sumVal(a, b) << endl;
    cout << Lambda()(a, b) << endl;
}