#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int l, w;
    cin >> l >> w;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}