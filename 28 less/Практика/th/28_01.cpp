#include <iostream>
#include <thread>
#include <string>

template <typename T>
T get_pr(T val1, T val2)
{
    return val1 * val2;
}

using namespace std;
int main()
{

    // верните результат ф-ии get_pr в отдельном потоке

    int res; // целочисленный результат
    thread fi_th([&res]()
                 { res = get_pr(30, 12); });

    double rez2; // вещественный результат
    thread se_th([&]()
                 { rez2 = get_pr(12.34, 40.234); });

    char rez3;
    thread third_th([&]()
                    { rez3 = get_pr('a', 'j'); });

    string rez4;
    auto f4 = [&]()
    {
        rez4 = get_pr('d', 'o');
    };
    thread four_th(f4);

    fi_th.join();
    se_th.join();
    third_th.join();
    four_th.join();

    cout << "Произведение целых чисел: " << res << endl;
    cout << "Произведение вещественнных чисел: " << rez2 << endl;
    cout << "Произведение символов: " << rez3 << endl;
    cout << "Произведение строк: " << rez4 << endl;
}