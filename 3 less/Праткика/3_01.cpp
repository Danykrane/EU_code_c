#include <iostream>
using namespace std;
int main()

{
    //счетный цикл
    // for (полей; поле2; поле3){
    //     //тело цикла
    // }

    //поле 1 - счетчик
    //поле 2 - предел счетчика (до какого момента)
    //поле 3 - насколько идет увеличение счетчика

    for (int i = 0; i < 10; i++)
    {
        cout << i << " Artem" << endl;
    }

    // 5
    for (int i = 5; i < 10; i++)
    {
        cout << i << " Artem" << endl;
    }
    cout << "-----------" << endl;
    int cnt = 0;
    for (int i = -4; i < 10; i++)
    {
        cout << i << " Artem" << endl;
        cnt++;
    }
    cout << endl
         << cnt << endl;

    //восходящий

    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }
    //низходящий
    cout << endl;
    for (int i = 10; i > 0; i--)
    {
        cout << 10 - i << endl;
    }

    //выводит числа кратные 2 (0 25) восх 0 2 4 6 8
    //выводит числа кратные 5 (0 25) низх 25 20 15
}