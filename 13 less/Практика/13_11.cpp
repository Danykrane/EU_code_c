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
        cout << "Информация об игроке: ";
        cout << nick << " " << lvl << " " << damage << endl;
    }
    void input()
    {
        cout << "Введите инфо" << endl;
        cin >> nick >> lvl >> damage;
    }
};

int main()
{
    cout << "Введите кол-во" << endl;
    int cnt;
    cin >> cnt;


    player **pr_arr = new player*[cnt]; // выделили память под 100 объектов класса player

    
    //массив дин объектов одного типа
    // пройдем до cnt и считаем зн у кадого игрока

    for (int i = 0; i < cnt; i++)
    {
        pr_arr[i] = new player; //по указателю в дин памяти мы создаем объект
    }

    for (int i = 0; i < cnt; i++)
    {
        pr_arr[i]->input();
    }

     for (int i = 0; i < cnt; i++)
    {
        pr_arr[i]->show();
    }

    //удление эл-тов

    for (int i = 0; i < cnt; i++)
    {
        delete pr_arr[i]; //удаление элементов
    }

    delete pr_arr; //удалили указатели на элементы

}