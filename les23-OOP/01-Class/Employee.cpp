#include <iostream>
using std::string;

class Employee {
    public:
        string Name;
        string Comapny;
        int Age;

    // string Name;
    // string Comapny;
    // int Age;

    void defaultFunc() {
        std::cout << "This is default func!" << std::endl;
    }

    public:
    void IntroduceYourSelf() {
        std::cout << "Hello every one, my name is " << this->Name << std::endl;
        std::cout << "Currently, I'm still working in  " << this->Comapny << std::endl;
        std::cout << "Up to the next month, I will come to " << this->Age << std::endl;
    }

    private:
        void testPrivateFunc() {
            std::cout << "This is private func!" << std::endl;
        }

    protected: void testProttectedFunc() {
        std::cout << "This is prottected func!" << std::endl;
    }

};

int main()
{
    int number;
    Employee employee1;
    employee1.Name = "Phucdn";
    employee1.Comapny = "TestCompB01";
    employee1.Age = 23;

    // std::cout << employee1.Name << std::endl;
    employee1.IntroduceYourSelf();

    /**
     * Basically: In C++: If they dont set access scope for variable or function, the default setting of them is private scope
    */
    // employee1.defaultFunc();
    // employee1.testPrivateFunc();
    // employee1.testProttectedFunc();

    return 0;
}
