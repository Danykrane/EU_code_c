#include <iostream>
// наследование
using namespace std;

class player
{
    string nick;
    int lvl;
    double damage;

public:
    void show()
    {
        cout <<"Информация об игроке: ";
        cout << nick << " " << lvl << " " << damage << endl;
    }
    void input()
    {
        cout << "Введите инфо"<<endl;
        cin >> nick >> lvl >> damage;
    }
};

int main()
{
    player pl1;
    pl1.input();
    pl1.show();
}