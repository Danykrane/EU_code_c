#include <iostream>
#include <thread>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Figure
{
public:
    virtual double get_sq() = 0;
    virtual double get_per() = 0;

    virtual void show_sq() = 0;
    virtual void show_per() = 0;
};

template <typename T>
class square : public Figure
{
    T stor1, stor2;

public:
    square(T len1, T len2) : stor1(len1), stor2(len2) {}
    T get_sq()
    {
        return stor1 * stor2;
    }
    T get_per()
    {
        return 2 * (stor1 + stor2);
    }
    void show_sq()
    {
        cout << "Площадь прямоуголника равна: " << get_sq() << endl;
    }

    void show_per()
    {
        cout << "Периметр прямоуголника равен: " << get_per() << endl;
    }
};

template <typename T>
class triangle : public Figure
{
    T stor1, stor2, stor3;

public:
    triangle(T len1, T len2, T len3) : stor1(len1), stor2(len2), stor3(len3) {}
    T polu_per()
    {
        return (stor1 + stor2 + stor3) / 2.0;
    }
    T get_sq()
    {
        return sqrt(polu_per() * (polu_per() - stor1) * (polu_per() - stor2) * (polu_per() - stor3));
    }
    T get_per()
    {
        return stor1 + stor2 + stor3;
    }
    void show_sq()
    {
        cout << "Площадь треуголиника равна: " << get_sq() << endl;
    }

    void show_per()
    {
        cout << "Периметр треуголиника равен: " << get_per() << endl;
    }
};

int main()
{

    vector<Figure *> figures;
    Figure *temp;

    auto start = chrono::steady_clock::now();

    thread add1([&]()
                {
        for (int i = 0; i < 100; i++)
    {
        temp = new square(3.4, 5.4);
        figures.push_back(temp);
        temp = new triangle(3.1, 4.4, 5.35);
        figures.push_back(temp);
    } });

    auto stop = chrono::steady_clock::now();
    add1.join();

    size_t col_elem = figures.size();
    // проходим с начала до половины абстрактного класса и выводим площадь
    thread fi_th([&]()
                 {
        for (int i = 0; i < col_elem /2;i++){
            figures[i]->show_per();
            figures[i]->show_sq();
        } });

    // проходим с половины до конца абстрактного класса и выводим площадь

    thread sec_th([&]()
                  {
        for (int i = col_elem/2; i < col_elem;i++){
            figures[i]->show_per();
            figures[i]->show_sq();
        } });

    // посчитаем суммарную площадь и периметр фигур

    sec_th.join();
    fi_th.join();

    cout << "\nВремя на добавление элементов: " << (stop - start).count() << endl;
    // third_th.join();
    // fourth_th.join();

    double sum_pl = 0, sum_per = 0;
    thread count1([&]()
                  {
        for (int i = 0; i < col_elem/2;i++){
            sum_per += figures[i]->get_per();
            sum_pl += figures[i]->get_sq();
        } });

    thread count2([&]()
                  {
        for (int i = col_elem/2; i < col_elem;i++){
            sum_per += figures[i]->get_per();
            sum_pl += figures[i]->get_sq();
        } });

    count1.join();
    count2.join();

    cout << "суммарная площадь: " << sum_pl << "\nсуммарный периметр: " << sum_per << endl;

    // for (int i = 0; i < col_elem; i++)
    // {
    //     delete[] figures[i];
    // }
    // // сделаем удаление асинхронно
    // delete[] temp;

    thread del1_th([&]
                   {
        for (int i = 0; i < figures.size()/ 2; i++){
            //figures.pop_back();
            delete[] figures[i];
        } });

    thread del2_th([&]
                   {
 for (int i = figures.size()/2; i < figures.size(); i++){
            //figures.pop_back();
            delete[] figures[i];
        } });

    delete[] temp;

    del1_th.join();
    del2_th.join();
}
