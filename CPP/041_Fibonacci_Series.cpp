/*
 * Program: Fibonacci Series
 * Description: Prints the Fibonacci series up to N terms.
 *              Each number = sum of the two previous numbers.
 *              Series: 0, 1, 1, 2, 3, 5, 8, 13, 21...
 *
 * Example Input:  8
 * Example Output: 0 1 1 2 3 5 8 13
 */
#include <iostream>
using namespace std;
int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    long long firstTerm = 0, secondTerm = 1, nextTerm;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= terms; i++) {
        if (i == 1) {
            cout << firstTerm;
        } else if (i == 2) {
            cout << " " << secondTerm;
        } else {
            nextTerm = firstTerm + secondTerm;  // Next = sum of previous two
            firstTerm = secondTerm;
            secondTerm = nextTerm;
            cout << " " << nextTerm;
        }
    }
    cout << endl;
    return 0;
}
