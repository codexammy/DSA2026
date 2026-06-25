/*
 * Program: Menu Driven Calculator
 * Description: A simple calculator with a menu for basic operations.
 *
 * Example:
 *   1. Addition
 *   2. Subtraction
 *   3. Multiplication
 *   4. Division
 *   Enter choice: 1
 *   Enter two numbers: 10 5
 *   Result = 15
 */
#include <iostream>
using namespace std;
int main() {
    int choice;
    double num1, num2;
    cout << "===== Simple Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (choice) {
        case 1:
            cout << "Result = " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Result = " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Result = " << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result = " << (num1 / num2) << endl;
            else
                cout << "Error: Cannot divide by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
