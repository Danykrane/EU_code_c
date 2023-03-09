#include <iostream>
#include <thread>
#include <string>

using namespace std;

template <typename T>
class Figure
{
    T len1, len2; // поля класса Figure

public:
    Figure(T arg1, T arg2) : len1(arg1), len2(arg2) {}
    // {
    //     // this len1 = arg1;
    // }
    /*  поля + модификаторы
     */
    T get_sq()
    {
        return len1 * len2;
    }
    T get_per()
    {
        return 2 * (len1 + len2);
    }
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

    cout << "Начало main потока" << this_thread::get_id() << endl;
    Figure<int> fig1(5, 10);

    thread fi_th(&Figure<int>::show_sq, fig1); // первый вариант передачи объекта и его метода в класс

    Figure<double> fig2(5.1, 10.1);
    thread sec_th([&]()
                  { fig2.show_sq(); }); // второй вариант передачи объекта и его метода в класс (анонимная ф-ия)

    fi_th.join();
    sec_th.join();

    cout << "Конец main потока" << this_thread::get_id() << endl;
}
