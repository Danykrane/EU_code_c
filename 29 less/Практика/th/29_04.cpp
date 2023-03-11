#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string str;
    std::ifstream inp("lol.txt");
    if (!inp.is_open())
    {
        std::cout << "Файл не найден" << std::endl;
    }
    else
    {
        while (getline(inp, str))
        {
            std::cout << str << std::endl;
        }
    }
}
