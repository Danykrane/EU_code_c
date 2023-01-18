#include <iostream>

using namespace std;

class Animal
{

public:
    void eat()
    {
        cout << "This animal eat" << endl;
    }

    virtual void go() // виртуальная ф-ия
    {
        cout << "This animal go" << endl;
    }
};

class HomeAn : public Animal
{
public:
    void eat()
    {
        cout << "Home animal eat" << endl;
    }

    void go()
    {
        cout << "Home animal go" << endl;
    }
};

int main()
{
    Animal *temp = new Animal;
    temp->eat();
    temp->go();
    cout << "\n";

    Animal *an1 = new HomeAn;
    an1->eat();
    an1->go();
}