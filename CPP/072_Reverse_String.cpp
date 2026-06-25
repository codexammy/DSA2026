/*
 * Program: Reverse String
 * Description: Reverses a string by swapping characters from both ends.
 *
 * Example Input:  "Hello"
 * Example Output: Reversed = "olleH"
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    string reversedString = inputString;
    int left = 0;
    int right = reversedString.length() - 1;
    // Swap characters from both ends moving towards the center
    while (left < right) {
        char temp = reversedString[left];
        reversedString[left] = reversedString[right];
        reversedString[right] = temp;
        left++;
        right--;
    }
    cout << "Original: " << inputString << endl;
    cout << "Reversed: " << reversedString << endl;
    return 0;
}
