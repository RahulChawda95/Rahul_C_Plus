#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize the member variables
    Student(string name, string studentClass, int rollNumber, float marks) {
        this->name = name;
        this->studentClass = studentClass;
        this->rollNumber = rollNumber;
        this->marks = marks;
    }

    // Function to calculate the grade based on marks
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    // Function to display student information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name, studentClass;
    int rollNumber;
    float marks;

    // Accepting user input
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student class: ";
    getline(cin, studentClass);
    cout << "Enter student roll number: ";
    cin >> rollNumber;
    cout << "Enter student marks: ";
    cin >> marks;

    // Creating a Student object using aggregation
    Student student1(name, studentClass, rollNumber, marks);

    // Using pointer variable to access student information
    Student *ptrStudent = &student1;
    cout << "Using pointer:" << endl;
    ptrStudent->displayInfo();

    // Using reference variable to access student information
    Student &refStudent = student1;
    cout << "Using reference:" << endl;
    refStudent.displayInfo();

    return 0;
}

