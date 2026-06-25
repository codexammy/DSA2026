/*
 * Program: Reverse a Number
 * Description: Reverses the digits of a number.
 *              Uses modulus (%) to extract digits one by one from the right.
 *
 * Example Input:  12345
 * Example Output: Reversed Number = 54321
 */
#include <iostream>
using namespace std;
int main() {
    long long number, reversedNumber = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;
    long long originalNumber = number;
    while (number != 0) {
        remainder = number % 10;         // Extract the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Build reversed number
        number /= 10;                    // Remove the last digit
    }
    cout << "Reversed Number of " << originalNumber << " = " << reversedNumber << endl;
    return 0;
}
