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
    player pl_arr[100]; //выделили память под 100 объектов класса player
    cout << "Введите кол-во"<<endl;
    int cnt;
    cin >> cnt;


    //пройдем до cnt и считаем зн у кадого игрока

    for(int i = 0; i < cnt; i++){
        pl_arr[i].input();
    }

    for(int i = 0; i < cnt; i++){
        pl_arr[i].show();
    }
}