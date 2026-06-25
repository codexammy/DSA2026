/*
 * Program: Convert Uppercase to Lowercase
 * Description: Converts all uppercase letters in a string to lowercase
 *              and all lowercase to uppercase (toggles case).
 *
 * Example Input:  "Hello World"
 * Example Output: Lowercase: "hello world"
 *                 Uppercase: "HELLO WORLD"
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    string lowerResult = inputString;
    string upperResult = inputString;
    for (int i = 0; i < (int)inputString.length(); i++) {
        lowerResult[i] = tolower(inputString[i]);  // Convert each char to lowercase
        upperResult[i] = toupper(inputString[i]);  // Convert each char to uppercase
    }
    cout << "Lowercase: \"" << lowerResult << "\"" << endl;
    cout << "Uppercase: \"" << upperResult << "\"" << endl;
    return 0;
}
