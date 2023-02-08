#include <iostream>

auto show_Val([](int val)
              { std::cout << val << std::endl; });

int main()
{
    int a = 42;
    show_Val(a);
}
