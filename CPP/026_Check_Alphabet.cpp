/*
 * Program: Check Alphabet
 * Description: Checks if the entered character is an alphabet letter.
 *
 * Example Input:  G
 * Example Output: 'G' is an alphabet.
 *
 * Example Input:  5
 * Example Output: '5' is NOT an alphabet.
 */
#include <iostream>
using namespace std;
int main() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;
    // isalpha() returns non-zero if the character is an alphabet
    if (isalpha(inputChar)) {
        cout << "'" << inputChar << "' is an alphabet." << endl;
    } else {
        cout << "'" << inputChar << "' is NOT an alphabet." << endl;
    }
    return 0;
}
