/*
 * Program: Triangle Type Checker
 * Description: Determines the type of a triangle based on its three sides.
 *              Equilateral: all sides equal
 *              Isosceles: two sides equal
 *              Scalene: all sides different
 *
 * Example Input:  5  5  5
 * Example Output: Equilateral Triangle
 */
#include <iostream>
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    // Check if it is a valid triangle: sum of any two sides > third side
    if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
        cout << "Not a valid triangle!" << endl;
    } else if (side1 == side2 && side2 == side3) {
        cout << "Equilateral Triangle (all 3 sides equal)" << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "Isosceles Triangle (2 sides equal)" << endl;
    } else {
        cout << "Scalene Triangle (all sides different)" << endl;
    }
    return 0;
}
