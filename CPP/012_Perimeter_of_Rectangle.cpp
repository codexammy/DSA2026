/*
 * Program: Perimeter of Rectangle
 * Description: Calculates the perimeter of a rectangle.
 *              Formula: Perimeter = 2 * (length + width)
 *
 * Example Input:  length=6  width=4
 * Example Output: Perimeter of Rectangle = 20
 */
#include <iostream>
using namespace std;
int main() {
    double length, width, perimeter;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    perimeter = 2 * (length + width);
    cout << "Perimeter of Rectangle = " << perimeter << endl;
    return 0;
}
