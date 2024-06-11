#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Constructor to initialize numbers
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    // Function to add two numbers
    double add() {
        return num1 + num2;
    }

    // Function to subtract two numbers
    double subtract() {
        return num1 - num2;
    }

    // Function to multiply two numbers
    double multiply() {
        return num1 * num2;
    }

    // Function to divide two numbers
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    char operation;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    Calculator calc(a, b);

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
        case '+':
            result = calc.add();
            break;
        case '-':
            result = calc.subtract();
            break;
        case '*':
            result = calc.multiply();
            break;
        case '/':
            result = calc.divide();
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

