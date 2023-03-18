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
    // 2 вариант решения
    File(const File &test) = delete;           // запрет на использование конструктора копирования
    File operator=(const File &test) = delete; // запрет на присваивание

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
        File f3;
        f3 = file;
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