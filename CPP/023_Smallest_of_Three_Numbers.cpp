/*
 * Program: Smallest of Three Numbers
 * Description: Finds the smallest among three numbers.
 *
 * Example Input:  10  25  18
 * Example Output: Smallest number is: 10
 */
#include <iostream>
using namespace std;
int main() {
    double num1, num2, num3;
    cout << "Enter first number:  ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number:  ";
    cin >> num3;
    if (num1 <= num2 && num1 <= num3) {
        cout << "Smallest number is: " << num1 << endl;
    } else if (num2 <= num1 && num2 <= num3) {
        cout << "Smallest number is: " << num2 << endl;
    } else {
        cout << "Smallest number is: " << num3 << endl;
    }
    return 0;
}
