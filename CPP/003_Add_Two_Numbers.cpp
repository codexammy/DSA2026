/*
 * Program: Add Two Numbers
 * Description: Takes two numbers from the user and prints their sum.
 *
 * Example Input:  5  3
 * Example Output: Sum = 8
 */
#include <iostream>
using namespace std;
int main() {
    double firstNumber, secondNumber, sum;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    sum = firstNumber + secondNumber;
    cout << "Sum = " << sum << endl;
    return 0;
}
