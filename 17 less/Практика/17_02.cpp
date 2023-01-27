#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
protected:
    string name;
    int *age;
    string email;

    virtual void read()
    {
        cout << "Введите email адресс " << endl;
        cin >> email;
        valid();
    }
    virtual void valid()
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
    Person(const Person &test)
    {
        this->name = name;              //копируем значение поля
        this->email = email;            //копируем значение поля
        this->age = new int(*test.age); //выделили память под переменную и занесли значение
        cout << "конструктор копирования" << endl;
    }

    virtual void info()
    {
        cout << "Информация о человеке: " << name << " " << *age << " " << email << endl;
    }

    ~Person()
    {
        cout << "Деструктор сработал" << endl;
        delete age;
    }
};

class Student : public Person
{
protected:
    int studNum;
    double middleMark;
    void read()
    {
        cout << "Введите email адресс " << endl;
        cin >> email;
    }
    void readS()
    {
        cout << "Введите студенческий номер " << endl;
        cin >> studNum;
    }
    void readM()
    {
        cout << "Введите cредний балл " << endl;
        cin >> middleMark;
    }
    bool flagE()
    {
        bool flag = true;
        auto begin = email.begin(), end = email.end();
        if ((begin = find(begin, end, '@')) != end &&
            find(begin, end, '.') != end)
        {
            flag = false;
        }
        else
        {
            cout << "Email rejected" << std::endl;
        }
        return flag;
    }

    bool flagS()
    {
        bool flag = false;
        if (studNum <= 0)
        {
            flag = true;
        }
        return flag;
    }
    bool flagM()
    {
        bool flag = false;
        if (middleMark <= 0)
        {
            flag = true;
        }
        return flag;
    }
    void valid()
    {
        while (flagE())
        {
            read();
        }
        while (flagS())
        {
            readS();
        }
        while (flagM())
        {
            readM();
        }
        cout << "All data accepted" << endl;
    }

public:
    Student(string name = " ", int age = 0, string email = " ", int studNum = 0, double middleMark = 0) : Person(name, age, email), studNum(studNum), middleMark(middleMark)
    {
        valid();
    }
    Student(const Person *test)
    {
    }
    void info()
    {
        cout << "Информация о студенте: " << name << " " << *age << " " << email << " " << studNum << " " << middleMark << endl;
    }
    ~Student()
    {
        cout <<"деструктор студента"<<endl;
        delete age;
    }
};

int main()
{

    Person *Alex = new Student("Alex", 10);
    // Person *Melman;
    // Melman = Alex;
    // Melman->info();
    Alex->info();
    delete Alex;
    // delete Alex;
    // delete Melman;
}