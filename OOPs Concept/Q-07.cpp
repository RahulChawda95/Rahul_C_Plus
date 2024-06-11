#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
    // Constructor to initialize num1 and num2
    Calculator(double n1, double n2) : num1(n1), num2(n2) {}

    // Function to perform addition
    double add() const {
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract() const {
        return num1 - num2;
    }

    // Function to perform division
    double divide() const {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    // Function to perform multiplication
    double multiply() const {
        return num1 * num2;
    }
};

int main() {
    double operand1, operand2;

    // Prompt the user to enter the operands
    cout << "Enter the first Number: ";
    cin >> operand1;

    cout << "Enter the second Number: ";
    cin >> operand2;

    // Create a Calculator object with the user-provided operands
    Calculator calc(operand1, operand2);

    // Perform addition and output the result
    cout << "Addition: " << calc.add() << endl;

    // Perform subtraction and output the result
    cout << "Subtraction: " << calc.subtract() << endl;

    // Perform division and output the result
    cout << "Division: " << calc.divide() << endl;

    // Perform multiplication and output the result
    cout << "Multiplication: " << calc.multiply() << endl;

    return 0;
}


