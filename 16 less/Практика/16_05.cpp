
#include <iostream>

using namespace std;

class Drob
{
    int ch;
    int zn;

public:
    Drob(int ch = 0, int zn = 1) : ch(ch), zn(zn) {}

    void showinfo()
    {
        cout << ch << "\\" << zn << endl;
    }

    // Drob operator+(const Drob &test)
    // {
    //     Drob temp;
    //     temp.ch = this->ch * test.zn + this->zn * test.ch;
    //     temp.zn *= test.zn;
    //     return temp;
    // }

    Drob operator+(const Drob &test)
    {
        return (this->ch * test.zn + this->zn * test.ch, this->zn *= test.zn);
    }

    Drob operator*(const Drob &test)
    {
        Drob temp;
        temp.ch = this->ch * test.ch;
        temp.zn = this->zn * test.zn;
        return temp;
    }

    Drob operator-()
    {
        Drob temp;
        temp.ch = -this->ch;
        temp.zn = this->zn;
        return temp;
    }

    // Дз  A - B
    //     A / B

    Drob operator+(const int &val)
    {
        Drob temp;
        temp.ch = this->zn * val + this->ch;
        temp.zn = this->zn;
        return temp;
    }
};

// дружественные ф-ии

int main()
{
    Drob A(1, 3), B(2, 4);
    // A.showinfo();
    // B.showinfo();

    Drob C;
    C = A + B;
    C.showinfo();
    A = C * B * B;
    // A.showinfo();
    A = -A;

    cout << endl;
    //  C = A.operator+(B);
    // A.showinfo();

    Drob M = C + 5; // Drob M = C.operator+(5);
    M.showinfo();
    M = 5 + C;
    M = operator+(5, C);
}