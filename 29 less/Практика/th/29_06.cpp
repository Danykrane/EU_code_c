#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string str;
    std::ifstream inp;

    inp.exceptions(std::ifstream::badbit | std::ifstream::failbit);

    try
    {

        std::cout << "start to open" << std::endl;
        inp.open("lo.txt");

        std::cout << "File opened" << std::endl;
        // если прирвется перая строка, то остальые выполнятся не будут
    }
    catch (const std::ifstream::failure &e) // передача информации из try
    {
        // ловим и проводим обработку
        std::cout << e.what() << std::endl;
        std::cout << e.code() << std::endl;
        std::cout << "Сработало исключение" << std::endl;
    }

    // if (!inp.is_open())
    // {
    //     std::cout << "Файл не найден" << std::endl;
    // }
    // else
    // {
    //     while (getline(inp, str))
    //     {
    //         std::cout << str << std::endl;
    //     }
    // }
}
