#include <iostream>

int main()
{
    char op;

    double num1;
    double num2;

    double result;

    std::cout << "**************** CALCULATOR ******************" << std::endl;

    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;

    std::cout << "Enter the operator (+, -, *, /): " << std::endl;
    std::cin >> op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << result << std::endl;
        break;

    case '-':
        result = num1 - num2;
        std::cout << result << std::endl;
        break;

    case '*':
        result = num1 * num2;
        std::cout << result << std::endl;
        break;

    case '/':
        result = num1 / num2;
        std::cout << result << std::endl;
        break;

    default:
        std::cout << "Invalid operator" << std::endl;
        break;
    }

    return 0;
}
