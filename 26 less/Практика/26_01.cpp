#include <iostream>
#include <thread> // библиотека C++
using namespace std;

// Многопоточность - спостобность ядра (процессора) выполнять несколько процессов одновремененно
// Concurrency

// 1 thread = 1 поток

void printHello()
{
    cout << "Hello! " << this_thread::get_id() << endl;
}

int main()
{
    //  this_thread::get_id() - метод текущего потока
    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    printHello();

    int a = 42;
    a++;

    printHello();
    printHello();
    printHello();

    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}