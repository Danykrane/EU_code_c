// Класс - аналог типа данных
// Объект - экземпляр класса
// Поле - перемененые, кторые мы объявили внутри класса
// Методы - ф-ии, кот мы объявили внутри класса

/*
class[название]{
    public: //модификатор доступа к полям и методам класса
    //тело класса (поля и методы)

};
*/


#include <iostream>
#include <cstring>
using namespace std;


class Vit
{
public:
    unsigned short int etazh;
    bool vert;

    void show(); // прототип
};

class Ark
{
public:
    unsigned short int etazh;
    bool vert;
    char name[100];
};

class Park
{
public:
    unsigned short int etazh;
    bool vert;
    int year;
};

int main()
{
    Vit dom1, dom2, dom3; // экземпляры класса Vit
    // для обращения к полю использ "."

    dom1.etazh = 10;
    dom2.etazh = 10;
    cin >> dom3.etazh;

    dom1.vert = true;
    dom2.vert = 0;
    dom3.vert = 0;

    dom1.show(); // вызов метода
    dom2.show();
    dom3.show();
}

void Vit::show() // реализация
{
    cout << "Кол-во этажей равно: " << etazh << endl;
    if (vert == 1)
        cout << "Вертолетная площадка есть" << endl;
    else
        cout << "Вертолетная площадки нет" << endl;
}