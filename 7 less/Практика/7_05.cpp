#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {1, 8, 3, 4, 5, 6, 56, 8};
    int size = 8;
    // * - разыменование (получение значения по данному адрресу)
    cout << arr << endl;
    cout << *arr << endl;       // 1 arr[0]
    cout << *(arr + 1) << endl; // arr[1]
    cout << *(arr + 4) << endl; // arr[4]
    cout << *(arr + 6) << endl; // arr[6]

    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }

  

}