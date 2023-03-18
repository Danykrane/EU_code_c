#include <iostream>
#include <fstream>

using namespace std;

// C style

int main()
{
    try
    {
        FILE *f = fopen("30_03.txt", "w");
        if (f == nullptr)
            throw(1);
        fputs("Some info for file", f);
        fclose(f);
    }
    catch (const int &err_num)
    {
        if (err_num == 1)
        {
            cout << "File not found" << endl;
        }
    }
}