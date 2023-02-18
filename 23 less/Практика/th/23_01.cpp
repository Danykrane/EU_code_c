#include <iostream>
#include <cmath>
#include <list>

using namespace std;
class vec1
{
protected:
    int x;

public:
    vec1(int x = 0) : x(x) {}
    virtual double len()
    {
        cout << "Длина вектора1" << endl;
        return fabs(x);
    }
};

class vec2 : public vec1
{
    int y;

public:
    vec2(int x = 0, int y = 0) : vec1(x), y(y) {}
    virtual double len()
    {
        cout << "Длина вектора2 " << x << " " << y << endl;
        return sqrt(static_cast<double>(fabs(x * x - y * y)));
    }
};
int main()
{
    list<vec1 *> vec;
    vec1 *fig1 = new vec1(10);
    vec2 *fig2 = new vec2(30, 80);
    vec.push_back(fig1);
    vec.push_back(fig2);
    for (auto &it : vec)
    {
        cout << it->len() << endl;
    }
}