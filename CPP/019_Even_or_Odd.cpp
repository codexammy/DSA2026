/*
 * Program: Even or Odd
 * Description: Checks if a number is even or odd using the modulus operator.
 *              A number is even if it is divisible by 2 (remainder = 0).
 *
 * Example Input:  7
 * Example Output: 7 is Odd
 *
 * Example Input:  12
 * Example Output: 12 is Even
 */
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    // The % operator gives the remainder of division
    if (number % 2 == 0) {
        cout << number << " is Even" << endl;
    } else {
        cout << number << " is Odd" << endl;
    }
    return 0;
}
