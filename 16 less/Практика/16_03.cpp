// тип результата operator знак операции (аргументы){
// тело ф-ии
// }

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Person
{
    string name;
    int *age; // указатель
    string email;

public:
    Person(string name = " ", int age = 0, string email = " ") : name(name), email(email)
    {
        this->age = new int(age);
    }

    Person(const Person &test)
    {
        this->email = test.email;
        this->name = test.name;
        this->age = new int(*test.age);
    }

    // void operator=(const Person &test)
    // {
    //     this->email = test.email;
    //     this->name = test.name;
    //     this->age = new int(*test.age);
    // }

    Person &operator=(const Person &test)
    {
        this->email = test.email;
        this->name = test.name;
        this->age = new int(*test.age);
        return *this;
    }

    ~Person()
    {
        cout << "Память удалена" << endl;
        delete age;
    }

    void read()
    {
        cin >> name >> *age >> email;
    }

    void info()
    {
        cout << name << " " << *age << " " << email << endl;
    }
};

int main()
{
    Person Alex, Gloria;
    Alex.read();
    Person Melman = Alex; // копирование
    Alex.info();
    Gloria.operator=(Melman);
    // Gloria = Melman; // присваивание
    Gloria.info();

    // int a = 5;
    // int b = a;
}