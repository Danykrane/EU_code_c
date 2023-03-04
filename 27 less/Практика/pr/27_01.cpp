#include <iostream>
#include <thread> // библиотека C++
using namespace std;

void show_val(int val)
{
    cout << val << endl;
}

void show_sum_val(int val1, int val2)
{
    cout << val1 + val2 << endl;
}

void obob(int val, int val2)
{
    show_val(val);
    show_sum_val(val, val2);
}
int main()
{
    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    int temp = 42, temp2 = 34;

    thread first_th(obob, temp, temp2);

    first_th.join();
    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}