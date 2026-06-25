/*
 * Program: Multiplication Table
 * Description: Prints the multiplication table of a given number up to 10.
 *
 * Example Input:  5
 * Example Output: 5 x 1 = 5
 *                 5 x 2 = 10
 *                 ...
 *                 5 x 10 = 50
 */
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;
    cout << "\nMultiplication Table of " << number << ":" << endl;
    cout << "-------------------" << endl;
    for (int multiplier = 1; multiplier <= 10; multiplier++) {
        cout << number << " x " << multiplier << " = " << (number * multiplier) << endl;
    }
    return 0;
}
