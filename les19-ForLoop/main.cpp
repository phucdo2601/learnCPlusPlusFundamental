#include <iostream>
#include <array>

int main() {
    std::array<int, 5> basArr = {5,6,7,8,9};

    for (auto &&i : basArr)
    {
        std::cout << "Element in arr: " << i << std::endl;
    }
    
    int basArrLength = basArr.size();

    for (int i = 0; i < basArrLength; i++) {
        std::cout << "Element in arr with for loop with index step: " << basArr[i] << std::endl;
    }

    std::cout << "Test for loop with no step params: " << std::endl;

    // INFINITIVE LOOP
    // for (;;)
    // {
    //     std::cout << "This will print forever unless we break the loop." << std::endl;
    // }
    
    std::cout << "Test for loop with one step params: " << std::endl;

    int i = 0;
    for (; i < 10; ) {
        std::cout << i << " ";
        ++i;
    }
}