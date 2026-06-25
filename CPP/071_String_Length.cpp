/*
 * Program: String Length
 * Description: Finds the length of a string (number of characters).
 *              Demonstrates both manual counting and using length() function.
 *
 * Example Input:  "Hello World"
 * Example Output: Length of string = 11
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);  // getline reads the entire line including spaces
    // Method 1: Using the built-in length() function
    int lengthUsingFunction = inputString.length();
    // Method 2: Manually counting characters
    int manualCount = 0;
    for (int i = 0; i < (int)inputString.length(); i++) {
        manualCount++;
    }
    cout << "Length of string (using function) = " << lengthUsingFunction << endl;
    cout << "Length of string (manual count)   = " << manualCount << endl;
    return 0;
}
