// Деструктор  - ф-ия, кот вызывается при удалении объекьта (динамич памяти)
// Запускается когда все команды программы были выполненды

// вызов деструктор автоматически
#include <iostream>
class Animal
{
    int age;

public:
    Animal(int age = 0) : age(age) {}
    ~Animal()
    {
        std::cout << "Вызван деструктор" << std::endl;
    } // деструктор
};

int main()
{

    Animal an, an2, an3, an4;
}