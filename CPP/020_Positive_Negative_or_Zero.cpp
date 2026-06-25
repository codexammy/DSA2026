/*
 * Program: Positive, Negative or Zero
 * Description: Determines whether a number is positive, negative, or zero.
 *
 * Example Input:  -5
 * Example Output: -5 is Negative
 *
 * Example Input:  0
 * Example Output: 0 is Zero
 */
#include <iostream>
using namespace std;
int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << number << " is Positive" << endl;
    } else if (number < 0) {
        cout << number << " is Negative" << endl;
    } else {
        cout << "The number is Zero" << endl;
    }
    return 0;
}
