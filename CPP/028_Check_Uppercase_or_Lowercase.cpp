/*
 * Program: Check Uppercase or Lowercase
 * Description: Checks if an alphabet letter is uppercase or lowercase.
 *
 * Example Input:  A
 * Example Output: 'A' is Uppercase
 *
 * Example Input:  b
 * Example Output: 'b' is Lowercase
 */
#include <iostream>
using namespace std;
int main() {
    char letter;
    cout << "Enter an alphabet: ";
    cin >> letter;
    if (!isalpha(letter)) {
        cout << "'" << letter << "' is not an alphabet." << endl;
    } else if (isupper(letter)) {
        cout << "'" << letter << "' is Uppercase" << endl;
    } else {
        cout << "'" << letter << "' is Lowercase" << endl;
    }
    return 0;
}
