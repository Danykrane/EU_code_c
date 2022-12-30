#include <iostream>
#include <string>

using namespace std;

class Animal
{
    int age;
    string name;

public:
    Animal(string name = " ", int age = 0)
    {
        this->name = name;
        this->age = age;
    }
    Animal &sum(const Animal &an)
    {
        this->age += an.age;
        return *this;
    }
    void show()
    {
        cout << name << " " << age << endl;
    }

    Animal &middle(const Animal &an1, const Animal &an2)
    {
        this->age = this->age + an1.age + an2.age / 3;
        return *this;
    }
};

int main()
{
    Animal Cat("Barsik", 12.2), Lion("Alex", 8), Hippo("Gloria", 5.45);
    Hippo.middle(Cat, Lion).show();
    Hippo.show();
    // Cat.middle(Hippo, Hippo);   // this = Cat, an1 = Hippo, an2 = Hippo
    // Lion.middle(Lion, Hippo); // this = Lion, an1 = Lion, an2 = Hippo
}
