#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    int number;
    cin >> number;
    unsigned short int cnt = 0;
    //требуется вывести значение кадого разряда
    // 123 => 1 2 3
    // 3456 => 3 4 5 6
    int buf = number;
    while (buf)
    {
        cnt++;
        buf /= 10;
    }
    // cout << number << " " << cnt << endl;

    for (int i = 0; i < cnt; i++)
    {
        // int digit = number;
        cout << (int)(number / pow(10, cnt - i - 1)) % 10 << " ";
        // cout << digit << " ";
        // 1234
        // 1 =  number /pow(10, 4 -1) %10
        // 2 =  number /pow(10,4 -2) % 10
        // 3 =  number / pow(10, 4 - 3) % 10
        // 4 =  number /pow(10, 4 - 4) % 10
    }
}