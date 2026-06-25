/*
 * Program: Find Square
 * Description: Calculates the square of a number (number multiplied by itself).
 *
 * Example Input:  5
 * Example Output: Square of 5 = 25
 */
#include <iostream>
using namespace std;
int main() {
    double number, square;
    cout << "Enter a number: ";
    cin >> number;
    square = number * number;  // Square = number^2
    cout << "Square of " << number << " = " << square << endl;
    return 0;
}
