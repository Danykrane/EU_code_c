#include <iostream>
#include <string>

using namespace std;

class Animal
{
    string name;
    int age = 0;

public:
    Animal(string name = "", int age = 0) : name(name), age(age){};
    void setname(string name)
    {
        this->name = name;
    }

    void print()
    {
        cout << name << " " << age << endl;
    }

    friend istream &operator>>(istream &, Animal &);       // прототип друж ф-ия
    friend ostream &operator<<(ostream &, const Animal &); // протоип друж ф-ия
};

istream &operator>>(istream &input, Animal &test)
{
    input >> test.name >> test.age;
    return input;
}

ostream &operator<<(ostream &output, const Animal &test)
{
    output << "Имя: " << test.name << endl;
    output << "Возраст: " << test.age << endl;
}

int main()
{
    Animal Alex; // объект класса

    cout << Animal("Alex", 12); // функтор
}