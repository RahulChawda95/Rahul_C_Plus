#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Setter function to set the company
    void setCompany(const string &c) {
        company = c;
    }

    // Setter function to set the model
    void setModel(const string &m) {
        model = m;
    }

    // Setter function to set the year
    void setYear(int y) {
        year = y;
    }

    // Getter function to get the company
    string getCompany() const {
        return company;
    }

    // Getter function to get the model
    string getModel() const {
        return model;
    }

    // Getter function to get the year
    int getYear() const {
        return year;
    }
};

int main() {
    Car car;
    string company, model;
    int year;

    // Prompt the user to enter the company, model, and year of the car
    cout << "Enter the company of the car: ";
    getline(cin, company);
    car.setCompany(company);

    cout << "Enter the model of the car: ";
    getline(cin, model);
    car.setModel(model);

    cout << "Enter the year of the car: ";
    cin >> year;
    car.setYear(year);

    // Output the details of the car
    cout << "Car Details:" << endl;
    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    return 0;
}

