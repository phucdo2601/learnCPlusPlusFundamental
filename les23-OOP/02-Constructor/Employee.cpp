#include <iostream>
#include <list>

using namespace std;


class Employee {
    public: string Name;
    public: int Age;
    public: string Company;
    public: double expYear;
    public: bool isMariage;
    public: char specSign;
    public: list<string> listDepts;

    public: Employee() {

    }

    public: Employee(string Name, int Age, string Company, double expYear, bool isMariage, char specSign, list<string> listDepts){
        this->Name = Name;
        this->Age = Age;
        this->Company = Company;
        this->expYear =  expYear;
        this->isMariage = isMariage;
        this->specSign = specSign;
        this->listDepts = listDepts;
    }

    public: string GetName() {
        return this->Name;
    }

    public: void SetName(string Name) {
        this->Name = Name;
    }

    public: int GetAge() {
        return this->Age;
    }

    public: void SetAge(int Age) {
        this->Age = Age;
    }

    public: string GetCompany() {
        return this->Company;
    }

    public: void SetCompany(string Company) {
        this->Company = Company;
    }

    public: double GetExpYear() {
        return this->expYear;
    }

    public: void SetExpYear(double expYear) {
        this->expYear = expYear;
    }

    public: bool IsMariage() {
        return this->isMariage;
    }

    public: void setIsMarige(bool isMariage) {
        this->isMariage = isMariage;
    }

    public: char getSpecSign() {
        return this->specSign;
    }

    public: void setSpecSign(char specSign) {
        this->specSign = specSign;
    }

    public: list<string> getListDepts() {
        return this->listDepts;
    }

    public: void setListDepts(list<string> listDepts) {
        this->listDepts = listDepts;
    }

    public: void IntroducYourSelf() {
        std::cout << "\nThe employee information: " << std::endl;
        std::cout << "Hello every one, my name is " << this->Name << std::endl;
        std::cout << "Currently, I'm still working in  " << this->Company << std::endl;
        std::cout << "Up to the next month, I will come to " << this->Age << std::endl;
        std::cout << "My working exp year is " << this->expYear << std::endl;

        if (this->isMariage == true)
        {
            printf("printf isMarige status: %d\n", isMariage );
            std::cout << "The isMarige status is " << this->isMariage << std::endl;
            std::cout << "I am married " << std::endl;
        } else {
            printf("printf isMarige status: %d\n", isMariage );
            std::cout << "The isMarige status is " << this->isMariage << std::endl;
            std::cout << "I am single " << std::endl;
        }
        std::cout << "My spec char is " << this->specSign << std::endl;

        for (string dept : listDepts)
        {
            std::cout << "My dept name " << dept << std::endl;
        }
        
    }
};

int main() {
    Employee emp1;
    emp1.Name = "Phucdn";
    emp1.Company = "TestCompB01";
    emp1.Age = 23;
    emp1.expYear = 1.5;
    emp1.isMariage = false;
    emp1.specSign = 'P';
    emp1.listDepts ={"testDept01", "testDept02", "testDept03"};
    emp1.IntroducYourSelf();


    Employee emp2("Billy", 22, "Net Company", 3, true, 'B', {"test-dep-b01", "test-dept-b02", "test-dept-b03", "test-dept-b04"});
    emp2.IntroducYourSelf();

    Employee emp3;
    emp3.SetName("John");
    emp3.SetAge(34);
    emp3.SetCompany("ELCA");
    emp3.SetExpYear(10);
    emp3.setIsMarige(true);
    emp3.setSpecSign('J');
    list<string> listJohnDepts = {"j-dept-b01", "j-dept-b02", "j-dept-b03", "j-dept-b04"};
    emp3.setListDepts(listJohnDepts);
    emp3.IntroducYourSelf();
}
