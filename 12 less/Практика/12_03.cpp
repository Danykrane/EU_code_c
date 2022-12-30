#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    void set(int x, int y)
    {
        (*this).x = x; // полная запись
        this->y = y;
    }

    void show()
    {
        cout << this->x << " " << this->y << endl;
    }
};
int main()
{
    Point k;
    k.set(3, 4); // this = k

    k.show();

    Point p;
    p.set(2, 5); // this = p
}