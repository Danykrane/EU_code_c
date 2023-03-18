#include <iostream>
#include <fstream>

using namespace std;

// C style

class File
{
    FILE *f;

public:
    File(const char *str)
    {
        f = fopen(str, "w+");
        if (f == nullptr)
        {
            throw("file not generated");
        }
    }

    void write_info(const char *str)
    {
        fputs(str, f);
    }
    ~File()
    {
        fclose(f);
        cout << "worked destr" << endl;
    }
};

int main()
{
    try
    {
        File file("30_02.txt");
        file.write_info("hello world!");
    }
    catch (const char *err)
    {
        cout << err << endl;
    }
    catch (...) // исключение всех типов
    {
        //
    }

    cout << "\nEND of program" << endl;
}