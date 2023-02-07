#include <iostream>

int main()
{

    std::string str1 = "Hello, world!";
    std::cout << sizeof(str1) << std::endl;
    std::cout << str1.size() << std::endl;
    for (int i = 0; i < str1.size(); i++)
    {
        std::cout << str1.at(i) << " ";
    }
    std::cout << std::endl;
    for (const auto &it : str1)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    for (const char &it : str1)
    {
        std::cout << it << " ";
    }
}