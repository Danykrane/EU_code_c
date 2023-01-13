#include <iostream>
//наследование
using namespace std;

class Point2
{
protected:

    int x, y;

public:
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    Point2(int x = 0, int y = 0) : x(x), y(y) {}

    void show2()
    {
        cout << x << " " << y << " ";
    }
};

class Point3 : public Point2
{
    int z;

public:
    Point3(int x = 0, int y = 0, int z = 0) : Point2(x, y)
    {
        this->z = z;
    }

    void show3()
    {
        show2();
        cout << z << " " << endl;
    }
};

int main()
{
    Point2 perv(4, 6);
    // perv.set(4,5);

    perv.show2();
    cout << endl;
    Point3 point3(1, 3, 4);
    point3.show3();
}