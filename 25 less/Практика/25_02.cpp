#include <fstream>

int main()
{
    std::ifstream inp("data.txt");
    // char symb = inp.get();
    // while (!inp.eof())
    // {
    //     symb = inp.get();
    // }

    
    // чтение посимвольно
    char symb;
    while (symb = inp.get(), !inp.eof())
    {
    }
}