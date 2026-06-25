/*
 * Program: Character Frequency
 * Description: Counts how many times a specific character appears in a string.
 *
 * Example Input:  String: "programming"  Character: 'g'
 * Example Output: 'g' appears 2 time(s) in "programming"
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    char searchChar;
    cout << "Enter a string: ";
    getline(cin, inputString);
    cout << "Enter the character to count: ";
    cin >> searchChar;
    int frequency = 0;
    for (int i = 0; i < (int)inputString.length(); i++) {
        if (inputString[i] == searchChar) {
            frequency++;
        }
    }
    cout << "'" << searchChar << "' appears " << frequency
         << " time(s) in \"" << inputString << "\"" << endl;
    return 0;
}
