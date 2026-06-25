/*
 * Program: Count Consonants
 * Description: Counts the number of consonants (non-vowel alphabets) in a string.
 *
 * Example Input:  "Hello World"
 * Example Output: Number of consonants = 7
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    int consonantCount = 0;
    cout << "Enter a string: ";
    getline(cin, inputString);
    for (int i = 0; i < (int)inputString.length(); i++) {
        char ch = tolower(inputString[i]);
        // Must be an alphabet AND not a vowel
        if (isalpha(ch)) {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                consonantCount++;
            }
        }
    }
    cout << "Number of consonants = " << consonantCount << endl;
    return 0;
}
