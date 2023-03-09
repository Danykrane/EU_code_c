#include <iostream>
#include <thread>
#include <string>

using namespace std;

template <typename T>
class Figure
{
    T stor1, stor2;

public:
    Figure(T len1, T len2) : stor1(len1), stor2(len2) {}
    T get_sq()
    {
        return stor1 * stor2;
    }
    T get_per()
    {
        return 2 * (stor1 + stor2);
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

    Figure<int> fig1(5, 10);

    thread fi_th(&Figure<int>::show_sq, fig1); // первый вариант передачи объекта и его метода в класс

    Figure<double> fig2(5.1, 10.1);
    thread sec_th([&]
                  { fig2.show_sq(); }); // второй вариант передачи объекта и его метода в класс (анонимная ф-ия)

    fi_th.join();
    sec_th.join();
}
