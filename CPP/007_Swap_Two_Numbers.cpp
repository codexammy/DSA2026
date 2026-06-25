/*
 * Program: Swap Two Numbers
 * Description: Swaps the values of two variables using a temporary variable.
 *
 * Example Input:  a=5  b=10
 * Example Output: After swap: a=10  b=5
 */
#include <iostream>
using namespace std;
int main() {
    int numberA, numberB, tempVariable;
    cout << "Enter first number (a): ";
    cin >> numberA;
    cout << "Enter second number (b): ";
    cin >> numberB;
    cout << "Before swap: a = " << numberA << ", b = " << numberB << endl;
    // Use a temporary variable to hold one value during the swap
    tempVariable = numberA;
    numberA = numberB;
    numberB = tempVariable;
    cout << "After swap:  a = " << numberA << ", b = " << numberB << endl;
    return 0;
}
