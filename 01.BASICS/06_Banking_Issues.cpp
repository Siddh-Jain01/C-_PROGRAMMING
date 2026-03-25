// WAP to solve banking issues using function using function by using deflaut function 
#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 1000, amount;

    cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter amount: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Deposited: Rs. " << amount << endl;
    }
    else if (choice == 2) {
        cout << "Enter amount: ";
        cin >> amount;
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    else if (choice == 3) {
        cout << "Current Balance: Rs. " << balance << endl;
    }
    else {
        cout << "Invalid choice!";
    }

    cout << "\nFinal Balance: Rs. " << balance;

    return 0;
} 