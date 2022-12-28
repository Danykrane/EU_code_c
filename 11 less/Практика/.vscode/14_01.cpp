#include <iostream>
#include <string>

using namespace std;

class Animal
{

    string name;
    int vozr;

    void valid()
    {
        if (vozr < 0)
            vozr = 0;
        if (vozr > 20)
            vozr = 20;
    }

public:
    void setN(string test)
    {
        name = test;
        valid();
    }

    void setA(int test)
    {
        if (test < 0)
            test = 0;
        if (test > 20)
            test = 20;
        vozr = test;
    }

    string getN()
    {
        return name;
    }

    int getA()
    {
        return vozr;
    }
};
// - -> 0
// 20 > -> 20

void read(Animal &cat)
{
    string name;
    cin >> name;
    cat.setN(name);
    int age;
    cin >> age;
    cat.setA(age);
    // validate(cat);
}


// void validate(Animal &cat)

void show(Animal &cat)
{
    cout << "Информация о животном: ";
    cout << cat.getN() << " " << cat.getA();
}

int main()
{
    Animal cot;
    // cot.setN(name);
    // cot.setA(24);
    read(cot);
    show(cot);
    // cout << cot.getN() << " "<<cot.getA();
}