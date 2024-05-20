#include <iostream>

int main() {
    /**
     * Type conversion
     *  Conversion a value of one data type to another data type
     *      - Implicit = automatic
     *      - Explicit = Precede value with new data type (int)
    */

    // double x = (int) 7.8;

    // std::cout << x << std::endl;

    int correct = 13;
    int questions = 20;
    double scores = (correct / (double) questions) * 100;

    std::cout << scores << "%" << std::endl;

    return 0;
}