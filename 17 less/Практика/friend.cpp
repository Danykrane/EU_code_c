#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class drob
{
protected:
    int ch;
    int zn;

public:
    drob(int ch = 0, int zn = 0) : ch(ch), zn(zn) {}
    void show()
    {
        cout << ch << "/" << zn << endl;
    }
    drob operator*(const drob &test)
    {
        drob res(this->ch * test.ch, this->zn * test.zn);
        return res;
    }
    drob operator+(const drob &test)
    {
        drob res(this->ch * test.zn + this->zn * test.ch, this->zn * test.zn);
        return res;
    }
    drob operator-(const drob &test)
    {
        drob res(this->ch * test.zn - this->zn * test.ch, this->zn * test.zn);
        return res;
    }
    drob operator-()
    {
        drob res(-this->ch, this->zn);
        return res;
    }
    drob operator+(const int &test)
    {
        drob other(test * 3, 3);
        drob res(this->ch * other.zn + this->zn * other.ch, this->zn * other.zn);
        return res;
    }
    drob operator/(const drob &other)
    {
        drob res(this->ch * other.zn, this->zn * other.ch);
        return res;
    }

    friend istream &operator>>(istream &, drob &);
    friend ostream &operator<<(ostream &, const drob &);

    friend drob operator+(const int &test, const drob &test1);
    friend drob operator*(const int &test, const drob &test1);
};
istream &operator>>(istream &in, drob &test)
{
    in >> test.ch >> test.zn;
    return in;
}

ostream &operator<<(ostream &out, const drob &test)
{
    out << test.ch << "/" << test.zn;
    return out;
}

drob operator+(const int &test, const drob &ty)
{
    drob res(test * ty.zn + ty.ch, ty.zn);
    return res;
}
drob operator*(const int &test, const drob &ty)
{
    drob res(test * ty.ch, ty.zn);
    return res;
}

int main()
{
    drob a, b;

    cin >> a >> b;
    drob c = (a.operator*(a)) - (8 * b) / (7 * a);
    cout << c;

    drob c = operator+(5, a);

    // drob c = 5 + a;
    //  drob d = a + 5;
    //  a.show();
    //  c.show();
    //  d.show();
}