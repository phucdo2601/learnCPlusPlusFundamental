#include <iostream>
#include <ctime>

int main() {

    /**
     * pseudo-random = NOT truely random (but close)
    */
    srand(time(NULL));

    int num1 = (rand() % 2) + 1;
    int num2 = (rand() % 2) + 1;
    int num3 = (rand() % 2) + 1;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    return 0;
}