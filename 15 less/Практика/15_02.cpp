#include <vector>
#include <iostream>

using namespace std;

int main()
{

    int cnt;
    cin >> cnt;
    vector<int> data(cnt);
    for (int i = 0; i < data.size(); i++)
    {
        cin >> data[i];
    }

    cout << endl;
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << " ";
    }
    
    cout << endl;

    // первый вариант
    // for (int i = 0; i < 2; i++)
    // {
    //     data.pop_back();
    // }

    // второй вариант
    data.resize(data.size() - 2);

    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << " ";
    }
}