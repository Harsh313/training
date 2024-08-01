#include <iostream>

using namespace std;

class Employee {
private:
    int empcode;
    float basic_salary;
    float net_salary;

public:
    void getDetails() {
        cout << "Enter Employee Code: ";
        cin >> empcode;
        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void calculateNetSalary() {
        float da = 1.74 * basic_salary; // 174% of basic salary
        float hra = 0.10 * basic_salary; // 10% of basic salary
        float ta = 500; // Travel allowance
        float income_tax = 0;

        if (basic_salary > 50000) {
            income_tax = 0.05 * basic_salary; // 5% of basic salary
        }

        net_salary = (basic_salary + da + hra + ta) - income_tax;
    }

    void displayDetails() {
        cout << "Employee Code: " << empcode << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

int main() {
    Employee employee[5];
    employee.getDetails();
    employee.calculateNetSalary();
    employee.displayDetails();

    return 0;
}

