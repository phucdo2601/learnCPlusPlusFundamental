#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "What 's your name?: " << std::endl;
    std::cin >> name;
    std::cout << "How old are you?: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << name << " is " << age << std::endl;

    return 0;
}