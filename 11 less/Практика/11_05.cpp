#include <iostream>
using namespace std;

class Animal
{
    string name;
    int vozr;

public:
    Animal(string name1, int vozr1)
    {
        if (name1 == " ")
            name1 = "Спросить кличку";
        if (vozr1 < 0)
            vozr1 = 0;

        name = name1;
        vozr = vozr1;
    }

    Animal(string name1)
    {
        if (name1 == "")
            name1 = "Спросить кличку";
        name = name1;
        vozr = 0;
    }
    Animal(int age)
    {

        name = "Спросить кличку";
        if (age < 0)
            age = 0;
        vozr = age;
    }

    Animal()
    {
        name = "Спросить кличку";
        vozr = 0;
    };

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