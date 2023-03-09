#include <iostream>
#include <thread>
#include <string>

template <typename T>
T get_pr(T val1, T val2)
{
    return val1 * val2;
}
template <typename T>
void show_pr(T val1, T val2)
{
    std::cout << val1 * val2 << std::endl;
}

template <typename T>
void rez_val(T val1, T val2, T &rez)
{
    rez = val1 * val2;
}

using namespace std;
int main()
{

    // верните результат ф-ии get_pr в отдельном потоке

    int res; // целочисленный результат
    // thread fi_th(show_pr<int>, 4, 5); - передача в тред ф-ии типа void

    // thread fi_th(rez_val<int>, 4, 5, ref(res)); - передача в тред ф-ии типа void c изменением какой-то перемнной

    // [&] - возмодность использовать внутри анонимной ф-ии много переменных их main
    thread fi_th([&]()
                 { 
                    // int i = 1000000;
                    // while (i--)
                    // {
                    // }
                    
                    //this_thread::sleep_for(chrono::milliseconds(1));
                    res = get_pr(4, 5); });

    double rez2; // вещественный результат
    thread se_th([&rez2]()
                 { rez2 = get_pr(4.1, 5.2); });

    char rez3; // символьный результат
    thread third_th([&rez3]()
                    { rez3 = get_pr('a', 'b'); });

    string rez4; // символьный результат
    auto f4 = [&rez4]()
    {
        rez4 = get_pr('a', 'b');
    };
    thread four_th(f4);

    /*
    дождаться завершения потока
    */

    third_th.join();
    four_th.join();
    fi_th.join();
    se_th.join();

    cout << "Произведение целых чисел: " << res << endl;
    cout << "Произведение вещественнных чисел: " << rez2 << endl;
    cout << "Произведение символов: " << rez3 << endl;
    cout << "Произведение строк: " << rez4 << endl;
}