#include <iostream>
#include <deque>

int main()
{

    std::deque<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);      // { 1, 2, 3, 4, 5, 6 }
    numbers.push_front(0);     // { 0, 1, 2, 3, 4, 5, 6 }
    numbers.emplace_back(7);   // { 0, 1, 2, 3, 4, 5, 6, 7 }
    numbers.emplace_front(-1); // { -1, 0, 1, 2, 3, 4, 5, 6, 7 }

    std::deque<int> numbers1 = {1, 2, 3, 4, 5};
    auto iter1 = numbers1.cbegin(); // итератор указывает на второй элемент
    numbers1.insert(iter1 + 2, 8);  // добавляем после второго элемента
    // numbers1 = { 1, 2, 8, 3, 4, 5};

    std::deque<int> numbers2 = {1, 2, 3, 4, 5};
    auto iter2 = numbers2.cbegin(); // итератор указывает на первый элемент
    numbers2.insert(iter2, 3, 4);   // добавляем вначало три четверки
    // numbers2 = { 4, 4, 4, 1, 2, 3, 4, 5};

    std::list<int> values = {10, 20, 30, 40, 50};
    std::deque<int> numbers3 = {1, 2, 3, 4, 5};
    auto iter3 = numbers3.cbegin(); // итератор указывает на первый элемент
    // добавляем в начало все элементы из values
    numbers3.insert(iter3, values.begin(), values.end());
    // numbers3 = { 10, 20, 30, 40, 50, 1, 2, 3, 4, 5};

    std::deque<int> numbers4 = {1, 2, 3, 4, 5};
    auto iter4 = numbers4.cend(); // итератор указывает на позицию за последним элементом
    // добавляем после последнего элемента список { 21, 22, 23 }
    numbers4.insert(iter4, {21, 22, 23});
    // numbers4 = { 1, 2, 3, 4, 5, 21, 22, 23};

    std::deque<int> numbers = {1, 2, 3, 4, 5};
    numbers.pop_front(); // numbers = { 2, 3, 4, 5 }
    numbers.pop_back();  // numbers = { 2, 3, 4 }
    numbers.clear();     // numbers ={}

    numbers = {1, 2, 3, 4, 5};
    auto iter = numbers.cbegin(); // указатель на первый элемент
    numbers.erase(iter);          // удаляем первый элемент
    // numbers = { 2, 4, 5, 6 }

    numbers = {1, 2, 3, 4, 5};
    auto begin = numbers.begin();  // указатель на первый элемент
    auto end = numbers.end();      // указатель на последний элемент
    numbers.erase(++begin, --end); // удаляем со второго элемента до последнего
    // numbers = {1, 5}
}