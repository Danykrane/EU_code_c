#include <iostream>

using namespace std;

class Animal
{
protected:
    string name;

public:
    Animal(string name = "") : name(name) {}

    virtual void info() = 0; // чисто виртуальная ф-ия
};

class Dog : public Animal
{
    int jump;

public:
    Dog(string name = "", int jump = 0) : Animal(name), jump(jump) {}

    void info()
    {
        cout << "Собака: " << name << " " << jump << endl;
    }
};

class Deer : public Animal
{
    int color;
    bool rog;

public:
    Deer(string name = "", int color = 0, bool rog = 0) : Animal(name), color(color), rog(rog) {}

    void info()
    {
        cout << "Олень: " << name << " " << color << " " << rog << endl;
    }
};

int main()
{
    // Animal an("Alex"); нельзя создавать объекты базового класса

    Animal *ptr_an; // указатель типа абстрактного класса

    string what;
    cout << "Укажите кого хотите создать\n";
    cin >> what;

    if (what == "Dog")
    {
        Dog rex("Rex", 20);
        // rex.info();
        ptr_an = &rex;
    }
    if (what == "Deer")
    {
        Deer ol("Olen", 145);
        // ol.info();
        ptr_an = &ol;
    }

    ptr_an->info();
}
