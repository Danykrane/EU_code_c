#include <iostream>
//композиция
using namespace std;

class Point2
{
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
        cout << x << " " << y << endl;
    }
};

class Point3
{
    Point2 points;
    int z;

public:
    Point3(int x = 0, int y = 0, int z = 0){
        this->points.set(x, y);
        this->z = z;
    }

    void show3(){
        points.show2();
        cout << z<<endl;
    }
};

int main()
{
    Point2 perv(4, 6);
    // perv.set(4,5);
    perv.show2();
    Point3 point3(1, 3, 4);
    point3.show3();
}