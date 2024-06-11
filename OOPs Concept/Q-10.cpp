#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the lengths of the sides
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to determine if the triangle is equilateral
    bool isEquilateral() const {
        return (side1 == side2 && side2 == side3);
    }

    // Function to determine if the triangle is isosceles
    bool isIsosceles() const {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Function to determine if the triangle is scalene
    bool isScalene() const {
        return (!isEquilateral() && !isIsosceles());
    }
};

int main() {
    double side1, side2, side3;

    // Prompt the user to enter the lengths of the sides
    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Create a Triangle object with the user-provided side lengths
    Triangle triangle(side1, side2, side3);

    // Determine the type of the triangle and output the result
    if (triangle.isEquilateral())
        cout << "The triangle is equilateral." << endl;
    else if (triangle.isIsosceles())
        cout << "The triangle is isosceles." << endl;
    else if (triangle.isScalene())
        cout << "The triangle is scalene." << endl;

    return 0;
}

