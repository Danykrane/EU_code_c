#include <iostream>
#include <string>

using namespace std;

class Animal
{
    string name;
    int age = 0;

public:
    void setname(string name)
    {
        this->name = name;
    }

    void print()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Animal Alex;
    // string name_;
    // cin >> name_;

    // Alex.setname(name_);
    // Alex.print();

    cin >> Alex;
    cout << Alex;
}