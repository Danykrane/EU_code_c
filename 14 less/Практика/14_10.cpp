
// Деструктор  - ф-ия, кот вызывается при удалении объекьта (динамич памяти)
// Запускается когда все команды программы были выполненды

// вызов деструктор автоматически

// Деструктои один
#include <iostream>
class Animal
{
protected:
    int *age; // указатель на переменную в дин памяти

public:
    Animal(int age = 0)
    {

        this->age = new int(age);
        std::cout << "Запутили коонструктор и занесли " << age << std::endl;
    }
    ~Animal()
    {
        std::cout << "Вызван деструктор, удалим выделенную под " << *age << " память" << std::endl;

        delete age;
        std::cout << "Память очищена" << std::endl;
    } // деструктор
};

class HommeAn : public Animal
{
    int *size;

public:
    HommeAn(int age = 0, int size = 0) : Animal(age)
    {
        std::cout << "Запутили коонструктор домашнего и занесли " << size << std::endl;
        this->size = new int(size);
    }
    ~HommeAn()
    {
        std::cout << "деструктор домашнего животного" << std::endl;
        delete size;
    }
};

int main()
{

    HommeAn(12, 240);
}