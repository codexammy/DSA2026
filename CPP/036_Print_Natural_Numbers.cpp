/*
 * Program: Print Natural Numbers
 * Description: Prints all natural numbers from 1 to N using a for loop.
 *
 * Example Input:  10
 * Example Output: 1 2 3 4 5 6 7 8 9 10
 */
#include <iostream>
using namespace std;
int main() {
    int limit;
    cout << "Enter the limit (N): ";
    cin >> limit;
    cout << "Natural numbers from 1 to " << limit << ":" << endl;
    for (int i = 1; i <= limit; i++) {
        cout << i;
        if (i < limit) cout << " ";
    }
    cout << endl;
    return 0;
}
