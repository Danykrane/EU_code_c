#include <iostream>

using namespace std;

int main()
{

    int number;
    cin >> number;
    int tmp = number; //чтобы не потерять
    unsigned short int cnt = 0;
    while (number != 0)
    {
        cnt++;
        number /= 10; //отбрасываю у числа последний разряд
        // cout << number << endl;
    }
    
    cout << number << endl; // 0
    cout << "Число разрядов " << cnt << endl;
}
