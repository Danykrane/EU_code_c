#include <iostream>
#include <thread> // библиотека C++
using namespace std;

void printHello()
{
    cout << "Beginin of printHello thread" << endl;
    cout << "printHello_ID - " << this_thread::get_id() << endl;
    cout << "End of printHello thread" << endl;
}

int main()
{

    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    thread second_th(printHello); // создание потока second_th и передача в него ф-ии

    printHello();

    thread three([]()
                 {  int i = 100000, sum = 0;
                    while (i--);
                    cout << "\n\nFunctor thread: " << this_thread::get_id() << "\n"
                        << endl; });

    three.detach(); // запуск потока в фоновом режиме
    second_th.join();

    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}