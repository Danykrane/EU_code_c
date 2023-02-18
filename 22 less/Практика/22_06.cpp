#include <iostream>
#include <cmath>
#include <list>

using namespace std;
class vec1
{
    int x;

public:
    vec1(int x = 0) : x(x) {}
    virtual double len()
    {
        return fabs(x);
    }
};

class vec2
{

    int y;

public:
    vec1(int x = 0) : x(x) {}
    virtual double len()
    {
        return fabs(x);
    }
};
int main()
{
    list<vec1> vec;
    vec1 fig1(10);
    vec1 fig2(50);
    vec.push_back(fig1);
    vec.push_back(fig2);
    for (auto &it : vec)
    {
        cout << it.len() << endl;
    }
}