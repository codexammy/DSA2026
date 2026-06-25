/*
 * Program: Largest of Two Numbers
 * Description: Finds the largest of two numbers using if-else.
 *
 * Example Input:  15  8
 * Example Output: Largest number is: 15
 */
#include <iostream>
using namespace std;
int main() {
    double firstNumber, secondNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    if (firstNumber > secondNumber) {
        cout << "Largest number is: " << firstNumber << endl;
    } else if (secondNumber > firstNumber) {
        cout << "Largest number is: " << secondNumber << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}
