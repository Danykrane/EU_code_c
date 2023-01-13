#include <iostream>
using namespace std;

class Player
{
    string nick;
    int lvl;
    double damage;

public:
    Player(string nick = " ", int lvl = 0, double damage = 0);
    void show();
    void input();
};

int main()
{
    int col; // кол-во игроков
    cin >> col;
    // Player **arr = new Player*[col];
    Player *arr = new Player[col];

    for (int i = 0; i < col; i++)
    {
        arr[i].input();
    }

    for (int i = 0; i < col; i++)
    {
        arr[i].show();
    }

 
    delete arr;
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