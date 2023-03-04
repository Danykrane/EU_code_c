#include <iostream>
#include <thread> // библиотека C++
using namespace std;

void show_val(int &val)
{
    val <<= 1;
    cout << val << endl;
}

int main()
{
    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    int temp = 42;
    thread first_th(show_val, ref(temp));

    first_th.join();
    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}