#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int foo(int n)
{
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return 1;
    return 0;
}
int main(void)
{
    int result = 0;
    for (int i = 120; i >= 40; --i)
        result += foo(i);
    printf("%d", result);
    return 0;
}