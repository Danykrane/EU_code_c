// в контецнер вовдят целые числа {1, 3, 2, 6, 18, 24, 11, 22}

// требуется написать ф-ию, которая считает кол-во элементов, которые являются
//  делителями суммы элементов этого контейнера

#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>

#include <chrono>

using namespace std;

// с многопоточностью
void count_zn(const vector<int> &test, const int &summa, int &cnt, int por)
{
    // for (int i = por; i < test.size(); i += 2)
    // {
    //     if (summa % test[i] == 0)
    //         cnt++;
    // }

    auto it = test.begin();
    std::advance(it, por);
    for (it = test.begin() + 0; it != test.end(); it += 2)
    {
        if (summa % *it == 0)
            cnt++;
    }
}

int main()
{
    auto start = std::chrono::steady_clock::now();
    vector<int> vec = {1, 3, 2, 6, 18, 24, 11, 22};
    int sum = 0;
    int cnt = 0;

    for_each(vec.begin(), vec.end(), [&sum](const int &temp)
             { sum += temp; });
    thread first_th(count_zn, ref(vec), ref(sum), ref(cnt), 0);
    thread second_th(count_zn, ref(vec), ref(sum), ref(cnt), 1);

    first_th.join();
    second_th.join();

    cout << cnt << endl;

    auto stop = std::chrono::steady_clock::now();
    cout << "Время выполнения программы " << (stop - start).count() << endl;
}