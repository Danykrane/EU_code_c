
#include <iostream>
#include <thread>
#include <chrono> //работа со временем
#include <vector>
#include <mutex>
using namespace std;

vector<int> v = {1, 2, 3, 4, 5};
int count_val = 10;
mutex vector_control; // регулировщик доступа к ресурсам :)
void show_value()
{
    while (v.size() < 50)
    {
        // Чтобы во время вывода не было добавления информации!
        // Пытаемся закрыть остальные потоки,чтобы показать элементы
        if (vector_control.try_lock())
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            vector_control.unlock();
        }
    }
}

void change_value()
{
    while (v.size() < 50)
    {
        // Пытаемся закрыть остальные потоки,чтобы добавить элемент
        // Если закрыли - то добавляем элемент
        if (vector_control.try_lock())
        {
            v.push_back(count_val);
            count_val++;
            vector_control.unlock();
        }
    }
}

int main()
{
    cout << "MAIN(PARENT) THREAD" << endl;
    int some_value = 20; // Переменная в памяти :)
    // thread имя(функция, список аргументов через запятую)
    // Ключевое слово ref - позволяет переменную передать потокам по ССЫЛКЕ!
    thread t1(show_value);   // 1 дочерний поток - показывает значение
    thread t2(change_value); // 2 дочерний поток - редактирует значение
    t1.join();
    t2.join();
    cout << "END MAIN(PARENT) THREAD" << endl;
    return 0;
}