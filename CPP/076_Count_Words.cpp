/*
 * Program: Count Words
 * Description: Counts the number of words in a string.
 *              Words are separated by spaces.
 *
 * Example Input:  "Hello World how are you"
 * Example Output: Number of words = 5
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a sentence: ";
    getline(cin, inputString);
    int wordCount = 0;
    bool inWord = false;
    for (int i = 0; i < (int)inputString.length(); i++) {
        if (inputString[i] != ' ' && !inWord) {
            // We just started a new word
            inWord = true;
            wordCount++;
        } else if (inputString[i] == ' ') {
            inWord = false;  // We hit a space, so we're between words
        }
    }
    cout << "Number of words = " << wordCount << endl;
    return 0;
}
