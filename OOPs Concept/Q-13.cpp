#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize the member variables
    Date() {
        day = 1;
        month = 1;
        year = 1900;
    }

    // Function to set the date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to get the day
    int getDay() {
        return day;
    }

    // Function to get the month
    int getMonth() {
        return month;
    }

    // Function to get the year
    int getYear() {
        return year;
    }

    // Function to validate if the date is valid
    bool isValidDate() {
        if (year < 1900 || year > 2100) // Year range validation
            return false;
        if (month < 1 || month > 12) // Month range validation
            return false;
        if (day < 1 || day > daysInMonth()) // Day range validation
            return false;
        return true;
    }

    // Function to calculate the number of days in a month
    int daysInMonth() {
        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (month == 2 && isLeapYear()) // February in leap year
            return 29;
        else
            return daysInMonth[month - 1];
    }

    // Function to check if it's a leap year
    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main() {
    int day, month, year;

    // Accepting user input
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    // Creating a Date object
    Date date;

    // Setting the date
    date.setDate(day, month, year);

    // Validating the date
    if (date.isValidDate()) {
        cout << "Date is valid." << endl;
        cout << "Day: " << date.getDay() << endl;
        cout << "Month: " << date.getMonth() << endl;
        cout << "Year: " << date.getYear() << endl;
    } else {
        cout << "Invalid date." << endl;
    }

    return 0;
}

