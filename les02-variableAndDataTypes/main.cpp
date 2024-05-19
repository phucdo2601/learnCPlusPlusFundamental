#include <iostream>

int main()
{
    /**
     * Basic data types in C++:
     *      - integer (whole number)
     *      - double (including decimal)
     *      - single character
     *      - boolean (true or false)
     *      - string (object that respresents a sequence of text0
     */

    int age = 21;
    int year = 2024;
    int days = 7.5;

    double price = 13.23;
    double gpa = 3.4;

    char grab = 'A';
    // char grabA = 'AD';w
    char grabB = '#';

    bool student = true;

    std::string name = "Phuc Do Ngoc";
    std::string food = "Hamburger";

    std::cout << "Hello " << name << std::endl;
    std::cout << name << " likes " << food << std::endl;

    std::cout
        << food << '\n';
    return 0;
}