#include <iostream>
using namespace std;

class BankAccount {
public:
    long long accountNumber;
    long long balance;
    string accountHolderName;
    string accountType;

    void setDetails(string holderName, long long accNo, string accType, long long initialBalance) {
        accountHolderName = holderName;
        accountNumber = accNo;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit() {
        double depositAmount;
        cout << "\n\n\t\tEnter Amount To Deposit: ";
        cin >> depositAmount;
        balance += depositAmount;
    }

    void withdraw() {
        double withdrawalAmount;
        cout << "\n\n\t\tEnter Amount To Withdraw: ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > balance) {
            cout << "\n\n\t\t! Cannot Withdraw the Amount\n";
        } else {
            balance -= withdrawalAmount;
        }
    }

    void display() {
        cout << "\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 DISPLAY \xb2\xb2\xb2\xb2\xb2\xb2";
        cout << "\n\n\t\tName: " << accountHolderName;
        cout << "\n\n\t\tBalance: " << balance;
    }
};

int main() {
    long long accountNumber;
    string accountHolderName;
    string accountType;
    long long initialBalance;

    cout << "\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 STATE BANK OF INDIA \xb2\xb2\xb2\xb2\xb2\xb2";
    cout << "\n\n\t\tEnter Name Of The Depositor: ";
    getline(cin, accountHolderName);
    cout << "\n\n\t\tEnter Account Number: ";
    cin >> accountNumber;
    cout << "\n\n\t\tEnter Type Of The Account: ";
    cin >> accountType;
    cout << "\n\n\t\tEnter Initial Balance Of The Account: ";
    cin >> initialBalance;

    BankAccount account;
    account.setDetails(accountHolderName, accountNumber, accountType, initialBalance);
    account.deposit();
    account.withdraw();
    account.display();

    return 0;
}

