#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // ввожу число, а затем увеличиваю его в 16 раз
    int val;
    cin >> val; // число не больше чем 2^16
    cout << (val << 4) << endl;

    // ввожу число, а затем уменьшаю в 4 раза
    int val2;
    cin >> val2;
    cout << (val2 >> 2) << endl;


    
}