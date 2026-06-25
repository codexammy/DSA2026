/*
 * Program: Strong Number
 * Description: Checks if a number is a Strong number.
 *              A Strong number equals the sum of factorials of its digits.
 *              Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
 *
 * Example Input:  145
 * Example Output: 145 is a Strong Number
 */
#include <iostream>
using namespace std;
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}
int main() {
    int number;
    long long sumOfFactorials = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;               // Extract last digit
        sumOfFactorials += factorial(digit); // Add its factorial
        temp /= 10;
    }
    if (sumOfFactorials == number)
        cout << number << " is a Strong Number" << endl;
    else
        cout << number << " is NOT a Strong Number" << endl;
    return 0;
}
