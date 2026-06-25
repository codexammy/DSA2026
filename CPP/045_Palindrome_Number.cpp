/*
 * Program: Palindrome Number
 * Description: Checks if a number reads the same forward and backward.
 *              Example: 121, 1331, 12321 are palindromes.
 *
 * Example Input:  121
 * Example Output: 121 is a Palindrome Number
 *
 * Example Input:  123
 * Example Output: 123 is NOT a Palindrome Number
 */
#include <iostream>
using namespace std;
int main() {
    int number, reversedNumber = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;
    int originalNumber = number;
    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    if (originalNumber == reversedNumber)
        cout << originalNumber << " is a Palindrome Number" << endl;
    else
        cout << originalNumber << " is NOT a Palindrome Number" << endl;
    return 0;
}
