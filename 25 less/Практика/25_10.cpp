// требуется создать контейнер (элменты повт) целые числа
// сначала указываем размер конт, а затем вводим
// требуется вывести максимальный и минимальный элементы

// 5
// 12 -45 2 5 9
// -45 12

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    for (auto &elem : vec)
    {
        cin >> elem;
    }

    // поиск макс и мин
    // сортировка + взятие индексов
    // sort(vec.begin(), vec.end()); O(n * log(N))

    auto min_max = minmax_element(vec.begin(), vec.end()); // O(N)
    cout << *min_max.first << " " << *min_max.second << endl;
}
