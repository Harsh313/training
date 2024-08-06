#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int Empcode;
    string Empname;
    double Basicsalary;

public:
    Employee(int code, string name, double salary) : Empcode(code), Empname(name), Basicsalary(salary) {}

    void displayDetails() const {
        cout << "Employee Code: " << Empcode << endl;
        cout << "Employee Name: " << Empname << endl;
        cout << "Basic Salary: " << Basicsalary << endl;
    }
};

int main() {
    int code;
    string name;
    double salary;

    cout << "Enter Employee Code: ";
    cin >> code;
    cout << "Enter Employee Name: ";
    cin.ignore(); // To ignore the newline character left in the input buffer
    getline(cin, name);
    cout << "Enter Basic Salary: ";
    cin >> salary;

    Employee emp(code, name, salary);
    emp.displayDetails();

    return 0;
}

