/*
 * Program: Count Digits
 * Description: Counts the number of digits in an integer.
 *              Example: 12345 has 5 digits
 *
 * Example Input:  9876
 * Example Output: Number of digits in 9876 = 4
 */
#include <iostream>
using namespace std;
int main() {
    long long number;
    int digitCount = 0;
    cout << "Enter an integer: ";
    cin >> number;
    long long originalNumber = number;
    if (number == 0) {
        digitCount = 1;  // 0 has one digit
    } else {
        if (number < 0) number = -number; // Handle negative numbers
        while (number != 0) {
            digitCount++;
            number /= 10;
        }
    }
    cout << "Number of digits in " << originalNumber << " = " << digitCount << endl;
    return 0;
}
