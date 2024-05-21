#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter name: " << std::endl;
    std::getline(std::cin, name);

    // name.append("@gmail.com");

    // if (name.empty())
    // {
    //     std::cout << "Your didn't enter your name" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    // name.insert(0, "&");

    // std::cout
    //     << name << std::endl;

    name.erase(0, 3);

    std::cout << name << std::endl;

    return 0;
}
