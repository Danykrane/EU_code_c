#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    ifstream input("in.txt");
    ofstream output("out.txt");
    int num, col;
    input >> num;
    vector<double> vec(num);
    for (auto &it : vec)
    {
        input >> it;
    }

    for (auto &it : vec)
    {
        cout << it << " ";
    }
    input >> col;

    for (auto it = vec.begin(); it != vec.end(); it += col)
    {
        output << *it << " ";
    }
}