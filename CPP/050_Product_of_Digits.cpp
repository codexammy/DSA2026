/*
 * Program: Product of Digits
 * Description: Calculates the product of individual digits of a number.
 *              Example: 234 -> 2 * 3 * 4 = 24
 *
 * Example Input:  234
 * Example Output: Product of digits of 234 = 24
 */
#include <iostream>
using namespace std;
int main() {
    int number, productOfDigits = 1, remainder;
    cout << "Enter a positive integer: ";
    cin >> number;
    int originalNumber = number;
    while (number != 0) {
        remainder = number % 10;      // Extract last digit
        productOfDigits *= remainder; // Multiply it to product
        number /= 10;
    }
    cout << "Product of digits of " << originalNumber << " = " << productOfDigits << endl;
    return 0;
}
