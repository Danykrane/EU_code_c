
// интернет магазин
// добавить стоимость товара в корзину (пока пользователь не введет отриц число) - 1
// удалить 2 последних товара - 2
// отсортировать товар по убыванию - 3
// удалить элементы, которые стоят больше 1500 и меньше 800 - 4

#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

void add(deque<double> &);
void show(const deque<double> &);
void rem(deque<double> &);
void sort(deque<double> &);
void del(deque<double> &);

int main()
{
    int number;
    deque<double> price;
    cin >> number;
    while (number)
    {
        switch (number)
        {
        case 1:
            cout << "Добавим  эл" << endl;
            add(price);
            break;
        case 2:
            cout << "Удалим 2 эл" << endl;
            rem(price);
            break;
        case 3:
            cout << "Сорт" << endl;
            sort(price);
            break;
        case 4:
            cout << "Удал по усл" << endl;
            del(price);
            break;
        case 5:
            show(price);
            break;
        default:
            cout << "Введено неверное значение" << endl;
            break;
        }
        cin >> number;
    }
}

void add(deque<double> &test)
{
    double val;
    cin >> val;
    while (val > 0)
    {
        test.push_front(val);
        cin >> val;
    }
}

void show(const deque<double> &test)
{
    for (const double &elem : test)
    {
        cout << elem << " ";
    }
    cout << endl;
}

void rem(deque<double> &test)
{

    // test.pop_back();
    // test.pop_back();

    test.resize(test.size() - 2);

    // test.erase(test.end() - 2, test.end());
}

void sort(deque<double> &test)
{
    // sort(test.begin(), test.end());// по возр
    sort(test.begin(), test.end(), [](double val1, double val2)
         { return (val2 < val1); });
}

void del(deque<double> &test)
{
    auto rem = remove_if(test.begin(), test.end(), [](double val)
                         { if (val > 1500 || val < 800)return true; });
    test.erase(rem, test.end());
}