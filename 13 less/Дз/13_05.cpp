#include <iostream>
#include <string>
#include <vector>

using namespace std;

class man
{
private:
    string name;
    int xp;
    int sp;
    int hp;
    int dam;

public:
    man(string name = " ", int xp = 0, int sp = 5, int hp = 3, int dam = 20) : name(name), xp(xp), sp(sp), hp(hp), dam(dam) {}
    void set_name(string test)
    {
        name = test;
    }
    void read()
    {
        cout << "Введите имя: " << endl;
        cin >> name;
    }
    void show()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam. " << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    man **ptr = new man *[n]; //создали указатель, который указывает на массив указателей, которые создают в дин памяти объекты
    for (int i = 0; i < n; i++)
    {
        ptr[i]->read();
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i]->show();
    }

    for (int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
}