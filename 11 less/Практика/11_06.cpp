#include <iostream>
using namespace std;

class Animal
{
    string name;
    int vozr;

    void valid()
    {
        if (name == " ")
            name = "Спросить кличку";
        if (vozr < 0)
            vozr = 0;
    }

public:
    Animal(string name = "Спросить кличку", int vozr = 0) : name(name), vozr(vozr)
    {
        valid();
    }

    Animal(int age) : vozr(age)
    {
        valid();
    }

    string getN()
    {
        return name;
    }

    int getW()
    {
        return vozr;
    }
};

void show(Animal &test)
{
    cout << "Имя животного: " << test.getN();
    cout << " Вес животного: " << test.getW() << endl;
}

int main()
{
    Animal cot("Tom", 12), mouse, dog("Лайка"), zebra(-4);

    show(cot);
    show(mouse);
    show(dog);
    show(zebra);
}