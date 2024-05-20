#include <iostream>

int main()
{
    char grade;

    std::cout << "Input the letter of grade: " << std::endl;
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Excellent" << std::endl;
        break;

    case 'B':
        std::cout << "Good" << std::endl;
        break;

    case 'C':
        std::cout << "Normal" << std::endl;
        break;

    default:
        std::cout << "Invalid grade" << std::endl;
        break;
    }
}