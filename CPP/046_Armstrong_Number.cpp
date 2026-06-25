/*
 * Program: Armstrong Number
 * Description: Checks if a number is an Armstrong (Narcissistic) number.
 *              An Armstrong number equals the sum of its digits each raised
 *              to the power of the number of digits.
 *              Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
 *
 * Example Input:  153
 * Example Output: 153 is an Armstrong Number
 */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number, originalNumber, remainder, digitCount = 0;
    double armstrongSum = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    originalNumber = number;
    // Count the number of digits
    int temp = number;
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }
    // Calculate sum of each digit raised to the power of digitCount
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        armstrongSum += pow(remainder, digitCount);
        temp /= 10;
    }
    if ((int)armstrongSum == originalNumber)
        cout << originalNumber << " is an Armstrong Number" << endl;
    else
        cout << originalNumber << " is NOT an Armstrong Number" << endl;
    return 0;
}
