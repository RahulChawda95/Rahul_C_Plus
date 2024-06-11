#include <iostream>
using namespace std;

class Calculator {
public:
    // Inline function to multiply two numbers
    inline double multiply(double a, double b) {
        return a * b;
    }

    // Inline function to find the cubic value of a number
    inline double cubic(double a) {
        return a * a * a;
    }
};

int main() {
    Calculator calc;
    double num1, num2;

    cout << "Enter first number for multiplication: ";
    cin >> num1;
    cout << "Enter second number for multiplication: ";
    cin >> num2;

    double multiplicationResult = calc.multiply(num1, num2);
    cout << "Multiplication result: " << multiplicationResult << endl;

    cout << "Enter a number to find its cubic value: ";
    cin >> num1;

    double cubicResult = calc.cubic(num1);
    cout << "Cubic value: " << cubicResult << endl;

    return 0;
}

