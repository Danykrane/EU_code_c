#include <vector>
#include <iostream>

using namespace std;

int main()
{

    vector<int> data; // создали пустой контейнер
    // cout << data.size(); 0
    int temp_data;
    cin >> temp_data;
    int cnt = 0;
    while (temp_data)
    {
        data.push_back(temp_data);
        cin >> temp_data;
    }

    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << " ";
    }
}