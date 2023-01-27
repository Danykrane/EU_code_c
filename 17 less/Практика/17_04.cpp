#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class person
{
protected:
    string name;
    int *age;
    string email;

public:
    virtual void read() = 0;
    virtual void info() = 0;
    virtual ~person() = 0;
};

person::~person(){};

class student : public person
{
protected:
    int number;
    double awg_mark;

public:
    student(string name = " ", int age = 0, string email = " ", int number = 0, double awg_mark = 0)
    {
        this->name = name;
        this->email = email;
        this->age = new int(age);
        this->number = number;
        this->awg_mark = awg_mark;
    }

    virtual void info()
    {
        cout << "Информация о студенте: " << endl
             << name << " " << *age << " " << email << " " << number << " " << awg_mark << endl;
    }

    virtual void read()
    {
        cout << "Введите данные о студенте: его имя, возраст, почту, номер и оценку: " << endl;
        cin >> name >> *age >> email >> number >> awg_mark;
        if (number < 0)
            number *= -1;
        if (awg_mark < 0)
            awg_mark *= -1;
    }

    ~student()
    {
        cout << "Деструктор cтудента" << endl;
        delete age;
    }
};

class professor : public person
{
protected:
    double salary;

public:
    professor(string name = " ", int age = 0, string email = " ", double salary = 0)
    {
        this->name = name;
        this->email = email;
        this->age = new int(age);
        this->salary = salary;
    }
    void read()
    {
        cout << "Введите данные о преподе: его имя, возраст, почту и зарплату: " << endl;
        cin >> name >> *age >> email >> salary;
        if (salary < 0)
            salary *= -1;
    }
    void info()
    {
        cout << "Информация о преподе: " << endl
             << name << " " << *age << " " << email << " " << salary << endl;
    }
    virtual ~professor()
    {
        cout << "Деструктор профессора" << endl;
        delete age;
    }
};

int cnt(vector<person *> &vec)
{
    int cnt = 0;
    for (auto &iter : vec)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    vector<person *> vec;
    string what;
    person *ptr;
    cout << "Введите персонажа: " << endl;
    int prep = 0;
    int stud = 0;
    while (what != "exit")
    {
        cin >> what;
        if (what == "student")
        {
            ptr = new student;
            vec.push_back(ptr);
            cout << "Студент добавлен Введите очередного персонажа: " << endl;
            stud++;
        }
        else if (what == "professor")
        {
            ptr = new professor;
            vec.push_back(ptr);
            cout << "Препод добавлен Введите очередного персонажа: " << endl;
            prep++;
        }
        else if (what == "exit")
        {
            cout << "Программа останавливает свою работу: " << endl;
        }
        else
        {
            cout << "Такого персонажа не существует, введите персонажа: " << endl;
        }
    }
    for (auto &iter : vec)
    {
        iter->info();
        cout << endl;
    }

    cout << endl
         << "Всего насчитано " << cnt(vec) << " человек" << endl;
    cout << "Из них: " << stud << " студент(a)(ов), и " << prep << " препод(a)(ов)." << endl;

    for (auto &iter : vec)
    {
        delete iter;
    }
    return 0;
}