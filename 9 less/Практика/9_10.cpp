#include <iostream>
#include <cctype>
using namespace std;
int main()
{

    char info[50] = {}; // пустая строка

    info[3] = 'k';
    info[4] = info[3] + 2; // m

    cout << info[4];

    char name1[] = "Artyom";
    char name2[] = "Oleg";

    if (name1 == name2)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Ne same" << endl;
        // name1[0] = name2[0]; - можно
        //  name1 = name2; нельзя присваивать сроки друг другу
    }


    
    cout << name1 << endl;
}