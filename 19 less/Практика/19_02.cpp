#include <iostream>

using namespace std;

template <typename T>
T minimum(const T &lhs, const T &rhs)
{
    return lhs < rhs ? lhs : rhs;
}

class Animal
{
    int age;

public:
    Animal(int age = 0) : age(age) {}
    int operator(int val)
    {
        return age;
    }
};

int main()
{
    Animal Alex(10), Melman(15);
    cout << minimum(Animal(10), Animal(15));
}
