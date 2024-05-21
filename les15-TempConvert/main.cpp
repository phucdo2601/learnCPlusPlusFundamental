#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "Enter temperature conversion: " << std::endl;
    std::cout << "F = Fahrenheit: " << std::endl;
    std::cout << "C = Celsius: " << std::endl;

    std::cout << "What unit would you like to convert to:" << std::endl;

    std::cin >> unit;
    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter temperature in Celsius: " << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temp is: " << temp << std::endl;
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter temperature in Fahrenheit: " << std::endl;
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temp is: " << temp << std::endl;
    }
    else
    {
        std::cout << "Invalid input. Please input only C or F." << std::endl;
    }

    std::cout << "***********************************************";
}