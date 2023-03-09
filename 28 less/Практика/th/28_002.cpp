#include <iostream>
#include <thread>
#include <string>

using namespace std;

template <typename T>
class Figure
{
    /*  поля + модификаторы
     */

    void show_sq()
    {
        cout << "Площадь равна: " << get_sq() << endl;
    }

    void show_per()
    {
        cout << "Периметр равен: " << get_per() << endl;
    }
};

int main()
{

    Figure<int> fig1(5, 10);

    thread fi_th(&Figure<int>::show_sq, fig1); // первый вариант передачи объекта и его метода в класс

    Figure<double> fig2(5.1, 10.1);
    thread sec_th([&]
                  { fig2.show_sq(); }); // второй вариант передачи объекта и его метода в класс (анонимная ф-ия)

    fi_th.join();
    sec_th.join();
}
