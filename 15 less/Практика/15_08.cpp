#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<double> cats;
    cout << "Введеите вес кошек. Если хотите остановиться введите 0" << endl;
    double temp;
    cin >> temp;
    while (temp)
    {
        cats.push_back(temp);
        cin >> temp;
    }
    cout << "Вес кошек введен и равен: " << endl;
    for (auto it : cats)
    {
        cout << it << " ";
    }
    vector<double> dogs;
    cout << "\nВведеите вес собак. Если хотите остановиться введите 0" << endl;
    cin >> temp;
    while (temp)
    {
        dogs.push_back(temp);
        cin >> temp;
    }
    cout << "Вес собак введен и равен: " << endl;
    for (auto it : dogs)
    {
        cout << it << " ";
    }

    int pos;
    cout << "Введите позицию вставки от 0 до " << dogs.size() - 1 << endl;
    cin >> pos;

    for (auto &it : cats)
    {
        dogs.insert(dogs.begin() + pos, it); // вставка элементов контейнера котов внутрь контейнера собак
    }

    cout << "контейнер собак имеет размерность " << dogs.size() << endl;
    for (auto it : dogs)
    {
        cout << it << " ";
    }
}