#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<double> wes = {2.14, 3.45, 45.56, 6};
    auto it = wes.begin();

    cout << wes.size() << endl;
    // проход по контейнеру 1 вер

    for (auto it = wes.begin(); it != wes.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // проход по контейнеру 2 вер
    for (auto it : wes)
    {
        cout << it << " ";
    }
}