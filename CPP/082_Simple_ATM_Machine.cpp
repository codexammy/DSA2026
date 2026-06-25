/*
 * Program: Simple ATM Machine
 * Description: Simulates a basic ATM with deposit, withdraw, and balance check.
 *              Uses a do-while loop and switch statement for the menu.
 *
 * Example:
 *   1. Check Balance
 *   2. Deposit
 *   3. Withdraw
 *   4. Exit
 *   Choice: 1 -> Balance = Rs 1000
 */
#include <iostream>
using namespace std;
int main() {
    double accountBalance = 1000.00;  // Starting balance
    int userChoice;
    double transactionAmount;
    cout << "====== Welcome to Simple ATM ======" << endl;
    do {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> userChoice;
        switch (userChoice) {
            case 1:
                cout << "Current Balance = Rs " << accountBalance << endl;
                break;
            case 2:
                cout << "Enter deposit amount: Rs ";
                cin >> transactionAmount;
                if (transactionAmount > 0) {
                    accountBalance += transactionAmount;
                    cout << "Rs " << transactionAmount << " deposited successfully." << endl;
                    cout << "New Balance = Rs " << accountBalance << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;
            case 3:
                cout << "Enter withdrawal amount: Rs ";
                cin >> transactionAmount;
                if (transactionAmount > accountBalance) {
                    cout << "Insufficient balance!" << endl;
                } else if (transactionAmount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    accountBalance -= transactionAmount;
                    cout << "Rs " << transactionAmount << " withdrawn successfully." << endl;
                    cout << "Remaining Balance = Rs " << accountBalance << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter 1-4." << endl;
        }
    } while (userChoice != 4);
    return 0;
}
