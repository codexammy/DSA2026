/*
 * Program: Concatenate Strings
 * Description: Joins (concatenates) two strings together.
 *              Uses the + operator to combine strings.
 *
 * Example Input:  "Hello"  "World"
 * Example Output: Concatenated String = "Hello World"
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string string1, string2, concatenatedString;
    cout << "Enter first string:  ";
    getline(cin, string1);
    cout << "Enter second string: ";
    getline(cin, string2);
    // Use + operator to concatenate strings
    concatenatedString = string1 + " " + string2;
    cout << "Concatenated String = \"" << concatenatedString << "\"" << endl;
    cout << "Total length = " << concatenatedString.length() << " characters" << endl;
    return 0;
}
