/*
 * Program: Sum of Digits
 * Description: Calculates the sum of individual digits of a number.
 *              Example: 1234 -> 1 + 2 + 3 + 4 = 10
 *
 * Example Input:  1234
 * Example Output: Sum of digits of 1234 = 10
 */
#include <iostream>
using namespace std;
int main() {
    int number, sumOfDigits = 0, remainder;
    cout << "Enter a positive integer: ";
    cin >> number;
    int originalNumber = number;
    while (number != 0) {
        remainder = number % 10;  // Extract last digit
        sumOfDigits += remainder; // Add it to sum
        number /= 10;             // Remove last digit
    }
    cout << "Sum of digits of " << originalNumber << " = " << sumOfDigits << endl;
    return 0;
}
