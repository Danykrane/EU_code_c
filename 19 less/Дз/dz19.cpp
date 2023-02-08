#include <iostream>
#include <map>
#include <string>

using namespace std;

int col(const map<string, string> &test)
{
    return test.size();
}

void add(map<string, string> &test, const int &kol)
{
    string name, place;
    for (int i = 0; i < kol; i++)
    {
        cin >> name >> place;
        test[name] = place;
    }
}
int main()
{

    cout << "===Программа справочник по обитателям вод===\nВыбери одну из кнопок программы\n"
         << endl;

    map<string, string> fish;

    string name, what;
    int choise;
    cout << "1: Добавить в справочник\n2: Найти в справочнике\n3: Выйти\n4: Удаление" << endl;
    cin >> choise;

    while (choise != 3)
    {
        switch (choise)
        {
        case 1:
            cout << "Вы нажали кнопку «1»";

            cout << "в данный момент в справочнике " << col(fish) << " обитателей." << endl;
            cout << "Сколько объектов хотите добавить в словарь? (Рыба и место ее обитания)" << endl;
            int k;
            cin >> k;
            add(fish, k);
            cout << "Информация добавлена" << endl;
            break;
        case 2:
            cout << "Вы нажали кнопку «2» Что вы хотите найти?" << endl;
            cin >> what;
            if (fish.find(what) != fish.end())
            {
                cout << fish[what] << endl;
            }
            else
                cout << "Такой рыбы нет" << endl;

            cout << "____Поиск законен______" << endl;
            break;

        case 4:
            cout << "Вы нажали кнопку «4» Кого вы хотите удалить?" << endl;
            cin >> what;
            if (fish.find(what) != fish.end())
            {
                fish.erase(what);
                cout << "____Данные удалены______" << endl;
            }
            else
                cout << "Такой рыбы нет" << endl;

            break;

        default:
            cout << "Такой команды нет" << endl;
            break;
        }
        cin >> choise;
    }
    cout << "Вы нажали кнопку «3». Хорошего дня!" << endl;
}