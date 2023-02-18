#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{

    std::deque<int> deque1;                  // пустая очередь
    std::deque<int> deque2(5);               // deque2 состоит из 5 чисел, каждый элемент имеет значение по умолчанию
    std::deque<int> deque(5, 2);             // deque3 состоит из 5 чисел, каждое число равно 2
    std::deque<int> deque4{1, 2, 4, 5};      // deque4 состоит из чисел 1, 2, 4, 5
    std::deque<int> deque5 = {1, 2, 3, 5};   // deque5 состоит из чисел 1, 2, 3, 5
    std::deque<int> deque6({1, 2, 3, 4, 5}); // deque6  состоит из чисел 1, 2, 3, 4, 5
    std::deque<int> deque7(deque4);          // deque7 - копия очереди deque4
    std::deque<int> deque8 = deque7;         // deque8 - копия очереди deque7
    
}