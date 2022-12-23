// если возраст меньше нуля, то сделать его нулем

#include <iostream>
using namespace std;

class Animal
{
public:
    char name[50];
    short int vozr;
    double wes;

    void show()
    {
        cout << "Name = " << name << "\n"
             << "Vozr = " << vozr << "\nWes = " << wes << endl;
        cout << endl;
    }

    void check()
    {
        if (vozr < 0)
        {
            vozr = 0;
        }
    }

    void input()
    {
        cin >> name >> vozr >> wes;
        check();
    }
};

int main()
{
    Animal lion, Zebra, Zhir;
    lion.input();
    lion.show();

    Zebra.input();
    Zebra.show();

    Zhir.input();
    Zhir.show();
}