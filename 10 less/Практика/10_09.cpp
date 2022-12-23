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
    }
};

void check(Animal test) // передача по значчению
{
    if (test.vozr < 0)
        test.vozr = 0;
}

int main()
{
    Animal lion;
    lion.input();
    check(lion);

    lion.show();
}