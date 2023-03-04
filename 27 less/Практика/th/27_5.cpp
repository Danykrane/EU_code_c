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
        this_thread::sleep_for(chrono::milliseconds(1000));

        cnt++;
    }
    cout << "Всего " << cnt << " итераций" << endl;
}

// задача: создать второй поток, который уваеличивает значение переменной from в 2 раза во время работы первого потока

void change_val(int &val)
{
    val <<= 1;
}

void change_val_col(int &val, const int &col)
{
    for (int i = 0; i < col; i++)
    {
        val <<= 1;
        this_thread::sleep_for(chrono::milliseconds(2000));
    }
}

int main()
{
    cout << "Начало работы потока системы - " << this_thread::get_id() << endl;

    int from, to;
    cin >> from >> to;

    int col;
    cout << "Сколько раз делать увеличение: " << endl;
    cin >> col;
    thread first_th(repeat_untill, ref(from), ref(to));
    thread sec_th(change_val_col, ref(from), ref(col));

    first_th.join();
    sec_th.join();
    cout << "Конец работы потока системы - " << this_thread::get_id() << endl;
}