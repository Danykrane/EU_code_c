#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>

using namespace std;

int main()
{
    queue<int, list<int>> val; // очередь на основе списка
    // queue<int, vector<int>> val; // очередь на очнове вектора

    int cnt = 5;

    int i = 0;
    while (cnt--)
    {
        val.push(i++);
    }
    cout << endl;
    while (!val.empty())
    {
        cout << val.front() << " ";
        val.pop();
    }
}