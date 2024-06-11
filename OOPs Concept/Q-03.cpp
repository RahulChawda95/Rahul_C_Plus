#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double PI = 3.14; // Define and initialize PI directly

public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Member function to calculate the area of the circle
    double getArea() const {
        return PI * radius * radius;
    }

    // Member function to calculate the circumference of the circle
    double getCircumference() const {
        return 2 * PI * radius;
    }

    // Setter function to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Getter function to get the radius
    double getRadius() const {
        return radius;
    }
};

int main() {
    double userRadius;

    // Prompt the user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    // Create a Circle object with the user-provided radius
    Circle circle(userRadius);

    // Output the area of the circle
    cout << "Area: " << circle.getArea() << endl;

    // Output the circumference of the circle
    cout << "Circumference: " << circle.getCircumference() << endl;

    return 0;
}

