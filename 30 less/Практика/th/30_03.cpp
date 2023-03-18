#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

// C style

class File
{
    FILE *f;

public:
    File(const char *str)
    {
        f = fopen(str, "r+w");
        if (f == nullptr)
        {
            throw("file not generated");
        }
    }
    // 1 вариант решения
    File(const File &test)
    {
        this->f = fopen("new_file.txt", "w");
        if (f == nullptr)
        {
            throw("new file not generated");
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
    srand(time(0));
    try
    {
        File file("30_02.txt");
        File f2 = file;

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