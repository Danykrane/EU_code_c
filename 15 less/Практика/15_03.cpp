#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> data = {1, 2, 33, 4}; // объявление + иницализация
    // cout << data.size();

    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << " ";
    }

    // int *ptr = new int(5);
    // cout << *ptr << endl;
    cout << endl;
    cout << *data.begin() << endl;
    cout << *(data.begin() + 2) << endl;
    cout << *(data.end() - 2) << endl;
    cout << *(data.end()) << endl;
    // rbegin() rend()
    cout << endl;
    cout << *(data.rbegin()) << endl;   // итератор на последний эл-т через первый
    cout << *(data.rend() - 1) << endl; // итератои который идет на первый элемент

    // for (int i = 0; i < data.size(); i++)
    // {
    //     cin >> data[i];
    // }

    // cout << endl;
    // for (int i = 0; i < data.size(); i++)
    // {
    //     cout << data[i] << " ";
    // }
}