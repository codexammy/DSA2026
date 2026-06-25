/*
 * Program: Find Cube
 * Description: Calculates the cube of a number (number multiplied three times).
 *
 * Example Input:  3
 * Example Output: Cube of 3 = 27
 */
#include <iostream>
using namespace std;
int main() {
    double number, cube;
    cout << "Enter a number: ";
    cin >> number;
    cube = number * number * number;  // Cube = number^3
    cout << "Cube of " << number << " = " << cube << endl;
    return 0;
}
