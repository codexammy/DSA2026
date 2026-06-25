/*
 * Program: Power Calculation
 * Description: Calculates base raised to the power of exponent without using pow().
 *              Uses a loop to multiply the base repeatedly.
 *
 * Example Input:  base=2  exponent=8
 * Example Output: 2 ^ 8 = 256
 */
#include <iostream>
using namespace std;
int main() {
    double base;
    int exponent;
    double result = 1;
    cout << "Enter base:     ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    // Multiply base by itself exponent times
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    cout << base << " ^ " << exponent << " = " << result << endl;
    return 0;
}
