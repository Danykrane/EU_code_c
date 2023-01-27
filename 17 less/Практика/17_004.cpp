#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
    string name;
    int age = 0;
    vector<double> wes;

    void sptop()
    {
        cout << "Введеное значение некооректно" << endl;
    }

public:
    double operator[](int ind)
    {
        if (wes.size() < ind)
        {
            sptop();
            return -1;
        }
        else
            return wes[ind];
    }
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
    // ввод значений в контейнер

    cout << "Заполним веса животного" << endl;
    cout << "Ввод пока не СТОП" << endl;

    string str;
    cin >> str;

    // while (str == "СТОП")
    // {
    //     double r;
    //     cin >> r;
    //     test.wes.push_back(r);
    //     cin >> str;
    // }

    // ввод занчения в векто
}

int main()
{
    Animal Alex;

    cin >> Alex;

    cout << Alex[3] << endl;

    // operator>>(cin, Alex);
    cout << Alex;
}