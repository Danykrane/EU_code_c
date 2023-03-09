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
    thread fi_th(/* */);

    double rez2; // вещественный результат
    thread se_th([/* */);

    char rez3; // символьный результат
    thread third_th(/* */); 

    string rez4; // символьный результат
    auto f4 = [&]()
    {
       
    };
    thread four_th(/**/);

    /* 
    дождаться завершения потока
    */

    cout << "Произведение целых чисел: " << res << endl;
    cout << "Произведение вещественнных чисел: " << rez2 << endl;
    cout << "Произведение символов: " << rez3 << endl;
    cout << "Произведение строк: " << rez4 << endl;
}