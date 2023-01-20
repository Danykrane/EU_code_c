#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int arr[100] = {1,
                    2,
                    3,
                    45,
                    6};
    // for (auto &it : arr)
    // {
    //     cin >> it;
    // }
    cout << endl;

    // проход по контейнеру 2 вер
    for (auto &it : arr)
    {
        cout << it << " ";
    }
}