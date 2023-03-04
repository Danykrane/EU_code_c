#include <iostream>
#include <thread> // библиотека C++
#include <chrono>

using namespace std;

void repeat_untill(int &val1, int &val2)
{
    int cnt = 0;
    while (val1 != val2)
    {
        (val1 > val2) ? val1-- : val1++;
        // остановка потока на 1000 миллисекунд
        cout << val1 << endl;
        this_thread::sleep_for(chrono::milliseconds(500));

        cnt++;
    }
    cout << "Всего " << cnt << " итераций" << endl;
}

void change_val(int &val)
{
    for (int i = 0; i < 4; i++)
    {
        this_thread::sleep_for(chrono::milliseconds(2000));
        val <<= 1;
    }
}

int main()
{
    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    int from, to;
    cin >> from >> to;

    thread first_th(repeat_untill, ref(from), ref(to));
    thread sec_th(change_val, ref(from));

    first_th.join();
    sec_th.join();
    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}