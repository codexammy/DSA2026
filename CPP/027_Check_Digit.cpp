/*
 * Program: Check Digit
 * Description: Checks if the entered character is a digit (0-9).
 *
 * Example Input:  7
 * Example Output: '7' is a digit.
 *
 * Example Input:  k
 * Example Output: 'k' is NOT a digit.
 */
#include <iostream>
using namespace std;
int main() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;
    // isdigit() returns non-zero if the character is 0-9
    if (isdigit(inputChar)) {
        cout << "'" << inputChar << "' is a digit." << endl;
    } else {
        cout << "'" << inputChar << "' is NOT a digit." << endl;
    }
    return 0;
}
