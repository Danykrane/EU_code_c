#include <iostream>

using namespace std;

class Animal
{

public:
    virtual void info() = 0; // чисто виртуальная ф-ия
};

class Dog : public Animal
{
    string name;
    int jump;

public:
    Dog(string name = "", int jump = 0) : name(name), jump(jump) {}

    void info()
    {
        cout << "Собака: " << name << " " << jump << endl;
    }
};

class Deer : public Animal
{
    string name;
    int color;
    bool rog;

public:
    Deer(string name = "", int color = 0, bool rog = 0) : name(name), color(color), rog(rog) {}

    void info()
    {
        cout << "Олень: " << name << " " << color << " " << rog << endl;
    }
};

int main()
{

    int cnt;
    cin >> cnt;
    Animal *temp; // указатель класса Animal
    Animal **arr_an = new Animal *[cnt];

    string what;

    for (int i = 0; i < cnt; i++)
    {
        cout << "Укажите кого хотите создать\n";
        cin >> what;

        if (what == "Dog")
        {
            Dog *ptr = new Dog("Rex", 20);
            arr_an[i] = ptr;
        }
        if (what == "Deer")
        {
            temp = new Deer("Olen", 145, 1);
            arr_an[i] = temp;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        arr_an[i]->info();
    }
    // ptr_an->info();

    for (int i = 0; i < cnt; i++)
    {
        delete[] arr_an[i];
    }

    delete[] arr_an;
    delete temp;
}
