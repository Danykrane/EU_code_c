#include <iostream>

using namespace std;

class Animal
{

public:
    void eat()
    {
        cout << "This animal eat" << endl;
    }

    void go()
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
    Animal temp;
    temp.eat();
    temp.go();
    cout << "\n";
    HomeAn an1;
    an1.eat();
    an1.go();
}