#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
private:
    string name;
    int *age;
    string email;

    void read()
    {
        cout << "Введите email адресс " << endl;
        cin >> email;
        valid();
    }
    void valid()
    {
        auto begin = email.begin(), end = email.end();
        if ((begin = find(begin, end, '@')) != end &&
            find(begin, end, '.') != end)
        {
            cout << "Email accepted" << std::endl;
        }
        else
        {
            cout << "Email rejected" << std::endl;
            read();
        }
    }

public:
    Person(string name = " ", int age = 0, string email = " ") : name(name), email(email)
    {
        this->age = new int(age);
        if (name == " ")
            name = "Имя не введено";
        valid();
    }
    virtual void info() = 0;
    virtual ~Person()
    {
        delete age;
    }
};
