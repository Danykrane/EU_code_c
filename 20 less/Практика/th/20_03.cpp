#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    string str1 = "Hello World!";
    cout << count_if(str1.begin(), str1.end(), [](char it)
                     { return it == 'o'; });
}