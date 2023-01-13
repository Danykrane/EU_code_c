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
    //int *ptr_a = new int(42);
    


    //int a = 42;
    //int *ptr_a;
    //ptr_a = &a;

    player *pl1_ptr = new player; //выделили 20 байт в куче
    //(*pl1_ptr).input();
    pl1_ptr->input();
    pl1_ptr->show();

    delete pl1_ptr; //возврашение памяти


    // player pl2;
    // pl2.input();
    // player *pl2_ptr = &pl2;
}
