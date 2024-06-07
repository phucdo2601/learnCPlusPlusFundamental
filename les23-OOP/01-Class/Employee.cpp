#include <iostream>
#include <list>

using namespace std;

class Employee {
    public:
        string Name;
        string Comapny;
        int Age;
        list<string> listDepts;

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

        // for (size_t i = 0; i < listDepts.size(); i++)
        // {
        //     list<string>::iterator dept = listDepts.begin();
        //     std::advance(dept, i);
        //     std::cout << "Dept name with inddex "<< i+1 << " " << *dept << std::endl;
        // }

        for (string dept :listDepts)
        {
            std::cout << "Dept name: " << " " << dept << std::endl;
        }
        
        
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
    employee1.listDepts ={"testDept01", "testDept02", "testDept03"};

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
