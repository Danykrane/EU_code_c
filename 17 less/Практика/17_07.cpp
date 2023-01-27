#include <iostream>
#include <string>

using namespace std;

class Ent
{
public:
    Ent()
    {
        cout << "Конструктор класса Ent" << endl;
    }
    virtual void info() = 0;
    virtual ~Ent();
};
Ent::~Ent()
{
    cout << "Деструктор класса Ent" << endl;
}

class Animal : public Ent
{
    int *age;

public:
    Animal(int age)
    {
        cout << "Конструктор класса Animal" << endl;
        this->age = new int(age);
    }

    virtual void info()
    {
        cout << "Возраст животного равен " << *age << endl;
    }

    virtual ~Animal()
    {
        cout << "Деструктор класса Animal" << endl;
        delete age;
    }
};

class Human : public Ent
{
    string name;
    int *vozr;

public:
    Human(string name, int vozr) : name(name)
    {
        cout << "Конструктор класса Human" << endl;
        this->vozr = new int(vozr);
    }

    void info()
    {
        cout << "Возраст человек " << name << " равен " << *vozr << endl;
    }

    ~Human()
    {
        cout << "Деструктор класса Human" << endl;
        delete vozr;
    }
};

int main()
{
    Ent *an = new Animal(12);
    Ent *pers = new Human("Dima", 24);

    an->info();
    pers->info();

    delete an;
    delete pers;
}