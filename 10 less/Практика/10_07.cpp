#include <iostream>
using namespace std;

class Animal
{
public:
    char name[50];
    unsigned short int vozr;
    double wes;

    void show()
    {
        cout << "Name = " << name << "\n"
             << "Vozr = " << vozr << "\nWes = " << wes << endl;
        cout << endl;
    }
};

int main()
{
    Animal lion, Zebra, Zhir;
    cin >> lion.name >> lion.vozr >> lion.wes;
    cin >> Zhir.name >> Zhir.vozr >> Zhir.wes;
    cin >> Zebra.name >> Zebra.vozr >> Zebra.wes;

    lion.show();
    Zebra.show();
    Zhir.show();
}
