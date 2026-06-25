/*
 * Program: Reverse Counting
 * Description: Counts down from N to 1 using a for loop.
 *
 * Example Input:  5
 * Example Output: 5 4 3 2 1
 */
#include <iostream>
using namespace std;
int main() {
    int startNumber;
    cout << "Enter a number to count down from: ";
    cin >> startNumber;
    cout << "Counting down: ";
    for (int i = startNumber; i >= 1; i--) {
        cout << i;
        if (i > 1) cout << " ";
    }
    cout << endl;
    return 0;
}
