/*
 * Program: Mini Bank Management System
 * Description: A simple bank system that can manage up to 5 accounts.
 *              Features: Create account, deposit, withdraw, check balance, display all accounts.
 *
 * This program demonstrates arrays, structs, functions, and menu-driven programming.
 *
 * Example:
 *   1. Create Account
 *   2. Deposit
 *   3. Withdraw
 *   4. Check Balance
 *   5. Display All Accounts
 *   6. Exit
 */
#include <iostream>
#include <string>
#include <iomanip>  // For setw() to format table output
using namespace std;

// A struct groups related data together (like a record)
struct BankAccount {
    int accountNumber;
    string accountHolderName;
    double balance;
    bool isActive;  // Tracks if this account slot is in use
};

// Function to find an account by account number
// Returns the index in the array, or -1 if not found
int findAccount(BankAccount accounts[], int totalAccounts, int targetAccountNumber) {
    for (int i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == targetAccountNumber && accounts[i].isActive) {
            return i;
        }
    }
    return -1;  // Not found
}

int main() {
    const int MAX_ACCOUNTS = 5;
    BankAccount accounts[MAX_ACCOUNTS];
    int totalAccounts = 0;
    int menuChoice;
    cout << "========================================" << endl;
    cout << "   Mini Bank Management System" << endl;
    cout << "========================================" << endl;
    do {
        cout << "\n--- Main Menu ---" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Display All Accounts" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> menuChoice;
        cin.ignore();
        switch (menuChoice) {
            case 1: {  // Create Account
                if (totalAccounts >= MAX_ACCOUNTS) {
                    cout << "Bank is full! Cannot create more accounts." << endl;
                    break;
                }
                BankAccount newAccount;
                newAccount.accountNumber = 1001 + totalAccounts;  // Auto-generate account number
                cout << "\n--- Create New Account ---" << endl;
                cout << "Account Number: " << newAccount.accountNumber << " (auto-assigned)" << endl;
                cout << "Enter account holder name: ";
                getline(cin, newAccount.accountHolderName);
                cout << "Enter initial deposit (min Rs 500): Rs ";
                cin >> newAccount.balance;
                if (newAccount.balance < 500) {
                    cout << "Minimum deposit is Rs 500. Account not created." << endl;
                } else {
                    newAccount.isActive = true;
                    accounts[totalAccounts] = newAccount;
                    totalAccounts++;
                    cout << "Account created successfully!" << endl;
                    cout << "Account Number: " << newAccount.accountNumber << endl;
                    cout << "Account Holder: " << newAccount.accountHolderName << endl;
                    cout << "Balance:        Rs " << newAccount.balance << endl;
                }
                break;
            }
            case 2: {  // Deposit
                int accNum;
                cout << "Enter account number: ";
                cin >> accNum;
                int index = findAccount(accounts, totalAccounts, accNum);
                if (index == -1) {
                    cout << "Account not found!" << endl;
                } else {
                    double depositAmount;
                    cout << "Enter amount to deposit: Rs ";
                    cin >> depositAmount;
                    if (depositAmount <= 0) {
                        cout << "Invalid amount!" << endl;
                    } else {
                        accounts[index].balance += depositAmount;
                        cout << "Rs " << depositAmount << " deposited successfully." << endl;
                        cout << "Updated Balance: Rs " << accounts[index].balance << endl;
                    }
                }
                break;
            }
            case 3: {  // Withdraw
                int accNum;
                cout << "Enter account number: ";
                cin >> accNum;
                int index = findAccount(accounts, totalAccounts, accNum);
                if (index == -1) {
                    cout << "Account not found!" << endl;
                } else {
                    double withdrawAmount;
                    cout << "Enter amount to withdraw: Rs ";
                    cin >> withdrawAmount;
                    if (withdrawAmount <= 0) {
                        cout << "Invalid amount!" << endl;
                    } else if (withdrawAmount > accounts[index].balance) {
                        cout << "Insufficient balance! Available: Rs " << accounts[index].balance << endl;
                    } else if (accounts[index].balance - withdrawAmount < 500) {
                        cout << "Cannot withdraw! Must maintain minimum Rs 500 balance." << endl;
                    } else {
                        accounts[index].balance -= withdrawAmount;
                        cout << "Rs " << withdrawAmount << " withdrawn successfully." << endl;
                        cout << "Remaining Balance: Rs " << accounts[index].balance << endl;
                    }
                }
                break;
            }
            case 4: {  // Check Balance
                int accNum;
                cout << "Enter account number: ";
                cin >> accNum;
                int index = findAccount(accounts, totalAccounts, accNum);
                if (index == -1) {
                    cout << "Account not found!" << endl;
                } else {
                    cout << "\n--- Account Details ---" << endl;
                    cout << "Account Number: " << accounts[index].accountNumber << endl;
                    cout << "Account Holder: " << accounts[index].accountHolderName << endl;
                    cout << "Current Balance: Rs " << accounts[index].balance << endl;
                }
                break;
            }
            case 5: {  // Display All Accounts
                if (totalAccounts == 0) {
                    cout << "No accounts found." << endl;
                } else {
                    cout << "\n--- All Bank Accounts ---" << endl;
                    cout << left << setw(12) << "Acc. No."
                         << setw(25) << "Account Holder"
                         << setw(15) << "Balance (Rs)" << endl;
                    cout << string(52, '-') << endl;
                    for (int i = 0; i < totalAccounts; i++) {
                        if (accounts[i].isActive) {
                            cout << left << setw(12) << accounts[i].accountNumber
                                 << setw(25) << accounts[i].accountHolderName
                                 << setw(15) << accounts[i].balance << endl;
                        }
                    }
                }
                break;
            }
            case 6:
                cout << "\nThank you for using Mini Bank Management System!" << endl;
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter 1-6." << endl;
        }
    } while (menuChoice != 6);
    return 0;
}
