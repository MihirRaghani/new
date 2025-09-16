```cpp
#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;
    std::string designation;

public:
    void setName(const std::string& empName) {
        name = empName;
    }

    std::string getName() const {
        return name;
    }

    void setSalary(double empSalary) {
        if (empSalary >= 0) {
            salary = empSalary;
        } else {
            std::cout << "Salary cannot be negative. Setting to 0." << std::endl;
            salary = 0;
        }
    }

    double getSalary() const {
        return salary;
    }

    void setDesignation(const std::string& empDesignation) {
        designation = empDesignation;
    }

    std::string getDesignation() const {
        return designation;
    }
};

int main() {
    Employee emp1;

    emp1.setName("Alice");
    emp1.setSalary(75000.0);
    emp1.setDesignation("Software Engineer");

    std::cout << "Employee Details:" << std::endl;
    std::cout << "Name: " << emp1.getName() << std::endl;
    std::cout << "Salary: $" << emp1.getSalary() << std::endl;
    std::cout << "Designation: " << emp1.getDesignation() << std::endl;

    return 0;
}
```
