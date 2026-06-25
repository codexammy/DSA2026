/*
 * Program: Count Vowels
 * Description: Counts the number of vowels (a, e, i, o, u) in a string.
 *
 * Example Input:  "Hello World"
 * Example Output: Number of vowels = 3
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    int vowelCount = 0;
    cout << "Enter a string: ";
    getline(cin, inputString);
    for (int i = 0; i < (int)inputString.length(); i++) {
        char ch = tolower(inputString[i]);  // Convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels in \"" << inputString << "\" = " << vowelCount << endl;
    return 0;
}
