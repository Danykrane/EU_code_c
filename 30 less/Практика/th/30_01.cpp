#include <iostream>
#include <fstream>

using namespace std;

// C style

int main()
{
    FILE *f = fopen("30_01.txt", "w");

    if (f != nullptr)
    {
        cout << "LOCATETD";
        fputs("Some info for file", f);

        //....

        fclose(f);
    }
    else
        cout << "File not found" << endl;
}