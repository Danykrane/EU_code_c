#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
    string name;
    int age = 0;
    vector<double> wes = {1.23, 3.14, 5.78, 7.23};

public:
    double operator[](int ind)
    {
        return wes[ind];
    }
    void
    setname(string name)
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
    Animal Alex;

    cin >> Alex;

    cout << Alex[3] << endl;

    // operator>>(cin, Alex);
    cout << Alex;
}