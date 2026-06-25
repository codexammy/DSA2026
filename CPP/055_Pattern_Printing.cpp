/*
 * Program: Pattern Printing
 * Description: Prints a right-angled triangle star pattern.
 *
 * Example Input:  5
 * Example Output:
 *   *
 *   * *
 *   * * *
 *   * * * *
 *   * * * * *
 */
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "\nStar Pattern:" << endl;
    // Outer loop controls the rows
    for (int row = 1; row <= rows; row++) {
        // Inner loop prints stars in each row
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;  // Move to next line after each row
    }
    return 0;
}
