/*
 * Program: Largest of Three Numbers
 * Description: Finds the largest among three numbers using nested if-else.
 *
 * Example Input:  10  25  18
 * Example Output: Largest number is: 25
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
    if (num1 >= num2 && num1 >= num3) {
        cout << "Largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "Largest number is: " << num2 << endl;
    } else {
        cout << "Largest number is: " << num3 << endl;
    }
    return 0;
}
