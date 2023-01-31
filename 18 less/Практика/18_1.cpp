#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> poses = {1, 2, 3, 4, 5, 6};
    cout << *(poses.rend() - 3) << endl;
}