#include <iostream>

using namespace std;

int main()
{

    double x, y;

    cin >> x >> y;
    
    if (y <= 4 * x && (x * x + y * y <= 9) && y >= 1 && x <= 1)
        cout << "Принадлежитт" << endl;
    else
        cout << "Не прин" << endl;
}