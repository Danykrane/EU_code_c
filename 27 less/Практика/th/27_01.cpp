#include <iostream>
#include <thread> // библиотека C++
using namespace std;

void printHello()
{
    cout << "Beginin of printHello thread" << endl;
    cout << "printHello_ID - " << this_thread::get_id() << endl;
    cout << "End of printHello thread" << endl;
}

void Hello()
{
    cout << "Beginin of Hello thread" << endl;
    cout << "Hello_ID - " << this_thread::get_id() << endl;
    cout << "End of Hello thread" << endl;
}

int main()
{

    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    thread first_th(Hello);       // создание потока first_th и передача в него ф-ии
    thread second_th(printHello); // создание потока second_th и передача в него ф-ии

    thread four(move(first_th));
    // if (first_th.joinable())

    int a = 42;
    a++;

    printHello();

    thread three([]()
                 { cout << "\n\nFunctor thread: " << this_thread::get_id() << "\n"
                        << endl; });

    three.join();
    // first_th.join(); // дожидается закрытия потока
    second_th.join();
    four.join();

    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}