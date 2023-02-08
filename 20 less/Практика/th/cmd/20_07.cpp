#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    // argc - количество аргументов
    // argv - масссив аргументов
    cout << "Работа программы" << endl;
    for (int i = 0; i < argc; ++i)
    {
        cout << i << " " << argv[i] << endl;
    }
}