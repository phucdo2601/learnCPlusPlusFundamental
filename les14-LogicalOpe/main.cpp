#include <iostream>

int main()
{
    /**
     * Logical Operators:
     * 1. &&: check if two conditions are true
     * 2. ||: check if at least one of conditions is true
     * 3. !: reverse the logical state
     */

    int a = 5;

    int b = 8;

    if (a != b && b > a)
    {
        std::cout << "a is not equal to b and b is greater than a" << std::endl;
    }
    else if (a == b || b != 0)
    {
        std::cout << "a is equal to b or b is not equal to 0" << std::endl;
    }
    else
    {
        std::cout << "a is not equal to b and b is not greater than a" << std::endl;
    }
}