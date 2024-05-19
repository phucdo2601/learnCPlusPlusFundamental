#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace first;

    // int x = 3;
    cout << x << std::endl;
    // std::cout << second::x << std::endl;
    // std::cout << x << std::endl;
    return 0;
}