// в контецнер вовдят целые числа {1, 3, 2, 6, 18, 24, 11, 22}

// требуется написать ф-ию, которая считает кол-во элементов, которые являются
//  делителями суммы элементов этого контейнера

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;

// без многопоточности
int count_zn(const vector<int> &test, const int &summa, int &cnt)
{
    // for (auto iter = test.begin(); iter != test.end(); iter++)
    // {
    //     if (summa % *iter == 0)
    //         cnt++;
    // }

    for (int i = 0; i < test.size(); i++)
    {
        if (summa % test[i] == 0)
            cnt++;
    }
    return cnt;
}

int main()
{
    auto start = std::chrono::steady_clock::now();
    vector<int> vec = {1, 3, 2, 6, 18, 24, 11, 22};
    int sum = 0;
    int cnt = 0;

    for_each(vec.begin(), vec.end(), [&sum](const int &temp)
             { sum += temp; });

    cout << count_zn(vec, sum, cnt) << endl;
    auto stop = std::chrono::steady_clock::now();
    cout << "Время выполнения программы " << (stop - start).count() << endl;
}