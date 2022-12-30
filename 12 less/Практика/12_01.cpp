#include <iostream>
using namespace std;

class Santa
{
    string name;
    int target;

public:
    void run()
    {
        cout << "Нужно сделать " << target << "подарков" << endl;
    }

    void setN(string nameS)
    {
        name = nameS;
    }
    void setk(int kol)
    {
        target = kol;
    }
    int getT()
    {
        return target;
    }
};

class Elf
{
    string name;
    int kol_podar;
    int vel;

public:
    int produce()
    {
        return kol_podar / vel;
    }

    void setN(string test)
    {
        name = test;
    }

    void setV(int velS)
    {
        vel = velS;
    }
    void setk(int kol)
    {
        kol_podar = kol;
    }
};

class HouseSanta
{
    Elf obj;     // объект класса Elf
    Santa claus; // объект класса Santa

public:
    HouseSanta(string nameS, int kol, string nameE, int vel)
    {
        claus.setN(nameS); // имя санты
        claus.setk(kol);   // кол-во подарков для Санты
        obj.setk(kol);     // кол-во подарков для Эльфа
        obj.setN(nameE);   // имя Эльфа
        obj.setV(vel);     // скорость работы Эльфа
    }
    void MakeGift()
    {
        int target = claus.getT();
        int time = obj.produce();

        cout << "На " << target << " подарков потребуется " << time << "  часов" << endl;
    }
};

int main()
{
    HouseSanta SevPolis("Moroz", 200, "Snezh", 200);

    // SevPolis.obj.name = "Snezh";

    SevPolis.MakeGift();
}