// требуется создать контейнер (элменты повт) целые числа
// сначала указываем размер конт, а затем вводим
// требуется вывести максимальный и минимальный элементы

// 5
// 12 -45 2 5 9
// -45 12

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    multiset<int> data;
    for (int i = 0; i < size; i++)
    {
        int val;
        cin >> val;
        data.insert(val);
    }
    // O(N)
    cout << *data.begin() << " " << *(data.rbegin()); // O(1)


}
