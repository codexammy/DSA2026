/*
 * Program: Count Character Types
 * Description: Counts uppercase, lowercase, digits, and special characters in a string.
 *
 * Example Input:  "Hello World 123!"
 * Example Output: Uppercase = 2, Lowercase = 8, Digits = 3, Special = 2, Spaces = 2
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    int uppercaseCount = 0, lowercaseCount = 0;
    int digitCount = 0, specialCount = 0, spaceCount = 0;
    cout << "Enter a string: ";
    getline(cin, inputString);
    for (int i = 0; i < (int)inputString.length(); i++) {
        char ch = inputString[i];
        if (isupper(ch))       uppercaseCount++;
        else if (islower(ch))  lowercaseCount++;
        else if (isdigit(ch))  digitCount++;
        else if (ch == ' ')    spaceCount++;
        else                   specialCount++;
    }
    cout << "\nCharacter Analysis:" << endl;
    cout << "Uppercase letters : " << uppercaseCount << endl;
    cout << "Lowercase letters : " << lowercaseCount << endl;
    cout << "Digits            : " << digitCount << endl;
    cout << "Spaces            : " << spaceCount << endl;
    cout << "Special characters: " << specialCount << endl;
    return 0;
}
