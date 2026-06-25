/*
 * Program: Prime Number Check
 * Description: Checks if a number is prime.
 *              A prime number has no divisors other than 1 and itself.
 *
 * Example Input:  17
 * Example Output: 17 is a Prime Number
 *
 * Example Input:  12
 * Example Output: 12 is NOT a Prime Number
 */
#include <iostream>
#include <cmath>  // For sqrt()
using namespace std;
int main() {
    int number;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 2) {
        isPrime = false;
    } else {
        // Check divisibility from 2 to square root of number
        // (No need to check beyond sqrt)
        for (int divisor = 2; divisor <= sqrt(number); divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << number << " is a Prime Number" << endl;
    else
        cout << number << " is NOT a Prime Number" << endl;
    return 0;
}
