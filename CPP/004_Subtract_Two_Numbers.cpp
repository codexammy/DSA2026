/*
 * Program: Subtract Two Numbers
 * Description: Takes two numbers and prints the result of subtracting the second from the first.
 *
 * Example Input:  10  4
 * Example Output: Difference = 6
 */
#include <iostream>
using namespace std;
int main() {
    double firstNumber, secondNumber, difference;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    difference = firstNumber - secondNumber;
    cout << "Difference = " << difference << endl;
    return 0;
}
