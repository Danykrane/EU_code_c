#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string str;
    std::ifstream inp("lol.txt");
    try
    {
        // проверяем (генерируем) исключительную ситуацию
    }
    catch (const std::exception &e) // передача информации из try
    {
        // ловим и проводим обработку
        std::cout << e.what() << std::endl;
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
