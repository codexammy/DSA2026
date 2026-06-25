/*
 * Program: Check Vowel or Consonant
 * Description: Checks if an entered alphabet is a vowel (a,e,i,o,u) or consonant.
 *
 * Example Input:  e
 * Example Output: 'e' is a Vowel
 *
 * Example Input:  B
 * Example Output: 'B' is a Consonant
 */
#include <iostream>
using namespace std;
int main() {
    char letter;
    cout << "Enter an alphabet: ";
    cin >> letter;
    // Convert to lowercase for easier comparison
    char lowerLetter = tolower(letter);
    if (lowerLetter == 'a' || lowerLetter == 'e' || lowerLetter == 'i' ||
        lowerLetter == 'o' || lowerLetter == 'u') {
        cout << "'" << letter << "' is a Vowel" << endl;
    } else if ((lowerLetter >= 'a' && lowerLetter <= 'z')) {
        cout << "'" << letter << "' is a Consonant" << endl;
    } else {
        cout << "'" << letter << "' is not an alphabet." << endl;
    }
    return 0;
}
