#include <iostream>
using namespace std;

class BankAccount {

     
public:
    double balance;                              //To correct it, just put the balance under private class.
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Error: Initial balance cannot be negative. Setting to 0." << endl;
        }
    }

    // Getter method for balance
    double getBalance() {
        return balance;
    }

    // Setter method with validation
    void setBalance(double newBalance) {
        if (newBalance >= 0) {
            balance = newBalance;
        } else {
            cout << "Error: Balance cannot be negative!" << endl;
        }
    }
};

int main() {
    BankAccount account(1000.0);  // Set initial balance with constructor

    cout << "Initial Balance: " << account.getBalance() << endl;

    // Attempt to set a negative balance
    account.balance = -500;

    cout << "Balance after invalid operation: " << account.getBalance() << endl;

    return 0;
}