/*
 * Program: GCD (Greatest Common Divisor)
 * Description: Finds the GCD of two numbers using the Euclidean algorithm.
 *              GCD is the largest number that divides both numbers exactly.
 *              Example: GCD(48, 18) = 6
 *
 * Example Input:  48  18
 * Example Output: GCD of 48 and 18 = 6
 */
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter first number:  ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int a = num1, b = num2;
    // Euclidean algorithm: GCD(a, b) = GCD(b, a % b) until b = 0
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    cout << "GCD of " << num1 << " and " << num2 << " = " << a << endl;
    return 0;
}
