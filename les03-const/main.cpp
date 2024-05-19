#include <iostream>

int main()
{
    const int age = 45;
    const int testVar01 = 56;
    testVar01 = 52;

    std::cout << age << std::endl;
    std::cout << testVar01 << std::endl;

    return 0;
}