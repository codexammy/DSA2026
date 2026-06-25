/*
 * Program: Compare Strings
 * Description: Compares two strings to check if they are equal.
 *              Also shows which comes first alphabetically.
 *
 * Example Input:  "apple"  "banana"
 * Example Output: Strings are NOT equal.
 *                 "apple" comes before "banana" alphabetically.
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string string1, string2;
    cout << "Enter first string:  ";
    getline(cin, string1);
    cout << "Enter second string: ";
    getline(cin, string2);
    if (string1 == string2) {
        cout << "Both strings are EQUAL." << endl;
    } else {
        cout << "Strings are NOT equal." << endl;
        // compare() returns negative if string1 < string2, positive if string1 > string2
        if (string1 < string2) {
            cout << "\"" << string1 << "\" comes before \"" << string2 << "\" alphabetically." << endl;
        } else {
            cout << "\"" << string2 << "\" comes before \"" << string1 << "\" alphabetically." << endl;
        }
    }
    return 0;
}
