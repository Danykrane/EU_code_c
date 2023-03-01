#include <iostream>
#include <thread> // библиотека C++
using namespace std;

void printHello()
{
    cout << "Hello! " << this_thread::get_id() << endl;
}

void Hello()
{
    cout << "Heeeee! " << this_thread::get_id() << endl;
}

int main()
{

    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    thread first_th(Hello);       // создание потока first_th и передача в него ф-ии
    thread second_th(printHello); // создание потока second_th и передача в него ф-ии

    int a = 42;
    a++;

    printHello();

    printHello();
    printHello();

    first_th.join(); // дожидается закрытия потока
    second_th.join();
    
    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}