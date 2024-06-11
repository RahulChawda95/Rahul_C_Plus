#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize the date
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Function to set the date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Getter functions to get the day, month, and year
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Function to validate if the date is valid
    bool isValid() const {
        // Simple validation: checking for valid month and day range
        if (month < 1 || month > 12)
            return false;
        if (day < 1 || day > 31)
            return false;
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
        if (month == 2) {
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                if (day > 29)
                    return false;
            } else {
                if (day > 28)
                    return false;
            }
        }
        return true;
    }
};

int main() {
    int day, month, year;

    // Prompt the user to enter the date
    cout << "Enter the date (day month year): ";
    cin >> day >> month >> year;

    // Create a Date object with the user-provided date
    Date date(day, month, year);

    // Check if the date is valid and output the result
    if (date.isValid()) {
        cout << "The entered date is valid." << endl;
        cout << "Day: " << date.getDay() << ", Month: " << date.getMonth() << ", Year: " << date.getYear() << endl;
    } else {
        cout << "The entered date is not valid." << endl;
    }

    return 0;
}


