#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // auto - автоматическое определение типа
    auto cat_size = 30;
    cout << cat_size << endl;

    auto cat_weight = 3.445;
    cout << cat_weight << endl;

    // auto temp; нельзя
    // cin >> temp;

    vector<double> wes;
    auto it = wes.begin();
}