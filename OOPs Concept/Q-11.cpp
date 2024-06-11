#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize name, employeeID, and salary
    Employee(const string &empName, int empID, double empSalary) : name(empName), employeeID(empID), salary(empSalary) {}

    // Function to calculate and set salary based on performance
    void setSalary(double performance) {
        salary *= performance;
    }

    // Getter function to get the name
    string getName() const {
        return name;
    }

    // Getter function to get the employee ID
    int getEmployeeID() const {
        return employeeID;
    }

    // Getter function to get the salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    string name;
    int employeeID;
    double salary, performance;

    // Prompt the user to enter employee details
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter employee ID: ";
    cin >> employeeID;

    cout << "Enter employee salary: ";
    cin >> salary;

    // Create an Employee object with the user-provided details
    Employee employee(name, employeeID, salary);

    // Prompt the user to enter performance (as a percentage)
    cout << "Enter performance (as a percentage, e.g., 0.95 for 95%): ";
    cin >> performance;

    // Calculate and set the new salary based on performance
    employee.setSalary(performance);

    // Output the updated salary
    cout << "Updated salary for employee " << employee.getName() << " (ID: " << employee.getEmployeeID() << "): g" << employee.getSalary() << endl;

    return 0;
}

