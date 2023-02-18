#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<double> weights;
    int col;
    cout << "Введите кол-во животных" << endl;
    cin >> col;
    while (col--)
    {
        double weight;
        cout << "Введите вес животного" << endl;
        cin >> weight;
        if (weight < 0)
            weight = 0;
        weights.push(weight);
    }

    cout << "Животных на приеме: " << weights.size() << endl;

    while (!weights.empty())
    {
        cout << weights.top() << " ";
        weights.pop();
    }
}