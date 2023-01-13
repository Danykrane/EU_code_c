#include <iostream>
using namespace std;

class Player
{
    string nick;
    int lvl;
    double damage;

public:
    Player(string nick = "", int lvl = 0, double damage = 0);
    void show();
    void input();

    
};

int main()
{
    Player *pl = new Player; // выделяем память под объектов в динамической памяти
    pl->input();
    pl->show();


    delete pl;

}

Player::Player(string nick, int lvl, double damage) : nick(nick), lvl(lvl), damage(damage) {}

void Player::show()
{
    cout << "\nPlayer name : " << nick << "\nyour level: " << lvl << "\nyour damage: " << damage << endl;
}

void Player::input()
{
    cout << "Введите данные => ";
    cin >> nick >> lvl >> damage;
}