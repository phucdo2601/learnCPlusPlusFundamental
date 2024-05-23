#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a positive #: " << std::endl;

        std::cin >> number;
    }while (number < 0);

    std::cout << "The # is: " << number << std::endl;

    return 0;
}