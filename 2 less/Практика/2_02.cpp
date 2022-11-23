#include <iostream>

using namespace std;

int main()
{

    double x, y;

    cin >> x >> y;
   // bool time; // 0
    bool flag = y <= 4 * x && (x * x + y * y <= 9) && y >= 1 && x <= 1;
    if (flag)
        cout << "Принадлежитт" << endl;
    else
        cout << "Не прин" << endl;
}