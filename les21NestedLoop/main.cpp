#include <iostream>

int main() {
    
    // for (int i = 0; i <= 5; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         std::cout << j << ' ';
    //     }
        
    //     std::cout << "\n" ;
    // }

    int rows;
    int columns;

    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "How many symbol?: ";
    std::cin >> symbol;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << symbol << ' ';
        }
        
        std::cout << "\n" ;
    }
}