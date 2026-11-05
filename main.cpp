#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Account {
private:
    int accountNumber;
    string holderName;
    string accountType;
    double balance;
    bool created;

public:
    // Constructor to initialize default values
    Account() {
        accountNumber = 0;
        holderName = "";
        accountType = "";
        balance = 0.0;
        created = false;
    }

    // Function to create a new bank account
    void createAccount() {
        cout << "\n===== CREATE NEW ACCOUNT =====\n";
        cout << "Enter account number: ";
        cin >> accountNumber;
        cin.ignore(); // Clear newline character from input buffer

        cout << "Enter customer name: ";
        getline(cin, holderName);

        cout << "Enter account type (Savings/Current): ";
        getline(cin, accountType);

        if (accountNumber > 0 && !holderName.empty()) {
            balance = 0.0;
            created = true;
            cout << "\nAccount created successfully.\n";
            cout << "Opening balance: " << fixed << setprecision(2) << balance << "\n";
        } else {
            created = false;
            cout << "\nInvalid account information. Please try again.\n";
        }
    }

    // Function to deposit money into the account
    void deposit() {
        if (!created) {
            cout << "\n[Error] Please create an account first.\n";
            return;
        }

        double amount;
        cout << "\n===== DEPOSIT MONEY =====\n";
        cout << "Enter deposit amount: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
            cout << "Updated Balance: " << fixed << setprecision(2) << balance << "\n";
        } else {
            cout << "Amount must be greater than zero.\n";
        }
    }

    // Function to withdraw money from the account
    void withdraw() {
        if (!created) {
            cout << "\n[Error] Please create an account first.\n";
            return;
        }

        double amount;
        cout << "\n===== WITHDRAW MONEY =====\n";
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Amount must be greater than zero.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance. Current balance is " << fixed << setprecision(2) << balance << ".\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
            cout << "Remaining Balance: " << fixed << setprecision(2) << balance << "\n";
        }
    }

    // Function to display account details
    void display() {
        if (!created) {
            cout << "\n[Error] No account available. Please create an account first.\n";
            return;
        }

        cout << "\n========== ACCOUNT DETAILS ==========\n";
        cout << "Account Number : " << accountNumber << "\n";
        cout << "Customer Name  : " << holderName << "\n";
        cout << "Account Type   : " << accountType << "\n";
        cout << "Current Balance: " << fixed << setprecision(2) << balance << "\n";
        cout << "=====================================\n";
    }
};

int main() {
    Account acc;
    int choice;

    do {
        cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                acc.createAccount();
                break;
            case 2:
                acc.deposit();
                break;
            case 3:
                acc.withdraw();
                break;
            case 4:
                acc.display();
                break;
            case 5:
                cout << "\nThank you for using the Bank Management System. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
