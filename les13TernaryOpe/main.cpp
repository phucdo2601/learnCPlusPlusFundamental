#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    age >= 18 ? std::cout << "You are elder people for cpmlainting." << std::endl : std::cout << "You are younger people" << std::endl;

    return 0;
}