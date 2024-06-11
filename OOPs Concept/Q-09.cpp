#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor to initialize the account number and balance
    BankAccount(const string &accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Member function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful." << endl;
    }

    // Member function to withdraw money from the account
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }

    // Getter function to get the account balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    string accNumber;
    double initialBalance, depositAmount, withdrawAmount;

    // Prompt the user to enter the account number and initial balance
    cout << "Enter the account number: ";
    cin >> accNumber;

    cout << "Enter the initial balance: ";
    cin >> initialBalance;

    // Create a BankAccount object with the user-provided account number and initial balance
    BankAccount account(accNumber, initialBalance);

    // Prompt the user to deposit money into the account
    cout << "Enter the amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    // Prompt the user to withdraw money from the account
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Output the updated balance
    cout << "Updated balance: " << account.getBalance() << endl;

    return 0;
}

