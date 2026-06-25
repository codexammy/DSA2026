/*
 * Program: Perfect Number
 * Description: Checks if a number is a perfect number.
 *              A perfect number equals the sum of its proper divisors.
 *              Example: 6 = 1 + 2 + 3 = 6
 *                       28 = 1 + 2 + 4 + 7 + 14 = 28
 *
 * Example Input:  6
 * Example Output: 6 is a Perfect Number
 */
#include <iostream>
using namespace std;
int main() {
    int number, sumOfDivisors = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    // Find all proper divisors (excluding the number itself)
    for (int divisor = 1; divisor < number; divisor++) {
        if (number % divisor == 0) {
            sumOfDivisors += divisor;
        }
    }
    if (sumOfDivisors == number)
        cout << number << " is a Perfect Number" << endl;
    else
        cout << number << " is NOT a Perfect Number" << endl;
    return 0;
}
