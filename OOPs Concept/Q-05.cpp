#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Setter function to set the name
    void setName(const string &n) {
        name = n;
    }

    // Setter function to set the age
    void setAge(int a) {
        age = a;
    }

    // Setter function to set the country
    void setCountry(const string &c) {
        country = c;
    }

    // Getter function to get the name
    string getName() const {
        return name;
    }

    // Getter function to get the age
    int getAge() const {
        return age;
    }

    // Getter function to get the country
    string getCountry() const {
        return country;
    }
};

int main() {
    Person person;
    string name, country;
    int age;

    // Prompt the user to enter the name
    cout << "Enter the name: ";
    getline(cin, name);
    person.setName(name);

    // Prompt the user to enter the age
    cout << "Enter the age: ";
    cin >> age;
    person.setAge(age);

    // Clear the input buffer before taking the next string input
    cin.ignore();

    // Prompt the user to enter the country
    cout << "Enter the country: ";
    getline(cin, country);
    person.setCountry(country);

    // Output the values
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}

