/*
 * Program: Palindrome String
 * Description: Checks if a string reads the same forward and backward.
 *              Example: "madam", "racecar", "level" are palindromes.
 *
 * Example Input:  "madam"
 * Example Output: "madam" is a Palindrome
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    // Convert to lowercase for case-insensitive comparison
    string lowerString = inputString;
    for (int i = 0; i < (int)lowerString.length(); i++) {
        lowerString[i] = tolower(lowerString[i]);
    }
    // Reverse the lowercase string
    string reversedString = lowerString;
    int left = 0, right = (int)reversedString.length() - 1;
    while (left < right) {
        char temp = reversedString[left];
        reversedString[left] = reversedString[right];
        reversedString[right] = temp;
        left++; right--;
    }
    if (lowerString == reversedString)
        cout << "\"" << inputString << "\" is a Palindrome" << endl;
    else
        cout << "\"" << inputString << "\" is NOT a Palindrome" << endl;
    return 0;
}
