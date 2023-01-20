#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<double> wes(5);
    // проход по контейнеру 2 вер
    for (auto &it : wes)
    {
        cin >> it;
    }
    cout << endl;

    // проход по контейнеру 2 вер
    for (auto &it : wes)
    {
        cout << it << " ";
    }
}