/*
 * Program: Factorial
 * Description: Calculates the factorial of a number.
 *              Factorial of n = n * (n-1) * (n-2) * ... * 1
 *              Example: 5! = 5*4*3*2*1 = 120
 *
 * Example Input:  5
 * Example Output: Factorial of 5 = 120
 */
#include <iostream>
using namespace std;
int main() {
    int number;
    long long factorial = 1;  // Start with 1 (identity for multiplication)
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    for (int i = 1; i <= number; i++) {
        factorial *= i;  // Multiply factorial by i each iteration
    }
    cout << "Factorial of " << number << " = " << factorial << endl;
    return 0;
}
