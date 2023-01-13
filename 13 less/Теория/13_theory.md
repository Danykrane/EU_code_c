## 13 Урок

### Разбор дз

<strong> Задача 12.1 </strong>(this) Задача из презентации (стр 27)



```c++
#include <iostream>
#include <string>

using namespace std;

class Animal
{
    double weight;
    string name;

public:
    Animal(string name = " ", double weight = 0)
    {
        (*this).name = name;
        this->weight = weight;
    }
    Animal &sum(const Animal &an)
    {
        this->weight += an.weight;
        return *this;
    }
    void show()
    {
        cout << name << " " << weight;
    }
    Animal &middle(const Animal &an1, const Animal &an2)
    {
        this->weight = (this->weight + an1.weight + an2.weight) / 3;
        return *this;
    }
    Animal &check()
    {
        if (this->weight < 20)
            this->weight += 5;

        return *this;
    }
    Animal &empty()
    {
        if (this->name == " ")
        {
            cout << "Поле имени пустое, введите имя ";
            cin >> this->name;
        }
        return *this;
    }
};

int main()
{
    Animal Cat("Barsik", 10.2), Lion("Alex", 8), Hippo(" ", 0.45);
    Hippo.middle(Cat, Lion).check().empty().show();
    Hippo.show();
}

```


> 
