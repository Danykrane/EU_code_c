#include <iostream>
#include <limits>
using namespace std;

int main()

{
    bool start;
    cin >> start;

    int a, b;
    char desitv;

    while (start)
    {
        cout << "Inp vals" << endl;
        cin >> a >> b;
        cout << "Inp deistv" << endl;
        cin >> desitv;

        switch (desitv)
        {
        case '+':
            cout << "plus" << endl;
            break;
        case '-':

            cout << "minus" << endl;
        default:
            break;
        }
        cout << "Inp operation" << endl;
        cin >> start;
    }
    return 0;
}