/*
 * Program: Divide Two Numbers
 * Description: Divides the first number by the second. Checks for division by zero.
 *
 * Example Input:  10  2
 * Example Output: Result = 5
 *
 * Example Input:  5  0
 * Example Output: Error! Cannot divide by zero.
 */
#include <iostream>
using namespace std;
int main() {
    double numerator, denominator, result;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    if (denominator == 0) {
        cout << "Error! Cannot divide by zero." << endl;
    } else {
        result = numerator / denominator;
        cout << "Result = " << result << endl;
    }
    return 0;
}
