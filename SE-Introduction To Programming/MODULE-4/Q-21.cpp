#include <iostream>
using namespace std;

class Account {
public:
    int choice;
    double depositAmount;
    double withdrawAmount;
    string name;
    string accountType;
    long long accountNumber;
    double balance;

    Account() {
        balance = 124000; // Initial balance
    }

    void welcome() {
        cout << "\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 WELCOME TO STATE BANK OF INDIA \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
        cout << "\n\n\t\t\t ************************* MENU ******************** ";
        cout << "\n\n\t\t\t\tPress 1 For Savings Account    ";
        cout << "\n\n\t\t\t\tPress 2 For Current Account    ";
        cout << "\n\n\t\t\t Enter Your choice: ";
        cin >> choice;
        if (choice == 1) {
            savingsAccount();
        } else if (choice == 2) {
            currentAccount();
        } else {
            cout << "\n\n\t\t\t Invalid choice!";
        }
    }

    void savingsAccount() {
        cout << "\n\n\t\t\t----------------------------------------------------------------------";
        cout << "\n\n\t\t\t                        SAVINGS ACCOUNT                                ";
        cout << "\n\n\t\t\t----------------------------------------------------------------------";
        enterAccountDetails();
        displayBalance();
        applyInterest();
    }

    void currentAccount() {
        cout << "\n\n\t\t\t----------------------------------------------------------------------";
        cout << "\n\n\t\t\t                        CURRENT ACCOUNT                                ";
        cout << "\n\n\t\t\t----------------------------------------------------------------------";
        cout << "\n\n\t\t\t It is necessary to keep a minimum balance of Rs. 1000. If the balance is less than 1000, a penalty of Rs. 1000 will be deducted automatically.";
        cout << "\n\n\t\t\t FACILITY: CHEQUE BOOK";

        enterAccountDetails();
        if (balance < 1000) {
            cout << "\n\n\t\t\t Balance is less than Rs. 1000. A penalty of Rs. 1000 is deducted.";
            balance -= 1000;
        }
        displayBalance();
    }

    void enterAccountDetails() {
        cout << "\n\n\t\t\t Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "\n\n\t\t\t Enter Account Number: ";
        cin >> accountNumber;
    }

    void displayBalance() {
        cout << "\n\n\t\t\t Account Holder: " << name;
        cout << "\n\n\t\t\t Account Number: " << accountNumber;
        cout << "\n\n\t\t\t Account Balance: Rs. " << balance;
    }

    void applyInterest() {
        float rate = 2.5;
        int time;

        cout << "\n\n\n\t\t\t Enter Time Interval in Years: ";
        cin >> time;
        double interest = balance * rate * time / 100;
        balance += interest;
        cout << "\n\n\t\t\t Balance with Interest is: Rs. " << balance;
    }

    void deposit() {
        cout << "\n\n\t\t\t Enter Amount to Deposit: ";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "\n\n\t\t\t Updated Balance is: Rs. " << balance;
    }

    void withdraw() {
        cout << "\n\n\t\t\t Enter Amount to Withdraw: ";
        cin >> withdrawAmount;
        if (withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "\n\n\t\t\t Transaction Completed.";
            cout << "\n\n\t\t\t Updated Balance is: Rs. " << balance;
        } else {
            cout << "\n\n\t\t\t Insufficient Balance!";
        }
    }
};

int main() {
    Account account;
    account.welcome();

    int transactionChoice;
    cout << "\n\n\t\t\t Do you want to make a transaction? Press 1 for Deposit, 2 for Withdraw, 0 to Exit: ";
    cin >> transactionChoice;

    while (transactionChoice != 0) {
        if (transactionChoice == 1) {
            account.deposit();
        } else if (transactionChoice == 2) {
            account.withdraw();
        } else {
            cout << "\n\n\t\t\t Invalid choice!";
        }
        cout << "\n\n\t\t\t Do you want to make another transaction? Press 1 for Deposit, 2 for Withdraw, 0 to Exit: ";
        cin >> transactionChoice;
    }

    return 0;
}

