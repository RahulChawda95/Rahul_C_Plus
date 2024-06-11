#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize the length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Member function to calculate the area of the rectangle
    double getArea() const {
        return length * width;
    }

    // Member function to calculate the perimeter of the rectangle
    double getPerimeter() const {
        return 2 * (length + width);
    }

    // Setter function to set the length
    void setLength(double l) {
        length = l;
    }

    // Setter function to set the width
    void setWidth(double w) {
        width = w;
    }

    // Getter function to get the length
    double getLength() const {
        return length;
    }

    // Getter function to get the width
    double getWidth() const {
        return width;
    }
};

int main() {
    double userLength, userWidth;

    // Prompt the user to enter the length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> userLength;

    cout << "Enter the width of the rectangle: ";
    cin >> userWidth;

    // Create a Rectangle object with the user-provided length and width
    Rectangle rectangle(userLength, userWidth);

    // Output the area of the rectangle
    cout << "Area: " << rectangle.getArea() << endl;

    // Output the perimeter of the rectangle
    cout << "Perimeter: " << rectangle.getPerimeter() << endl;

    return 0;
}


