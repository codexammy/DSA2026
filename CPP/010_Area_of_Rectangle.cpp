/*
 * Program: Area of Rectangle
 * Description: Calculates the area of a rectangle given its length and width.
 *              Formula: Area = length x width
 *
 * Example Input:  length=8  width=5
 * Example Output: Area of Rectangle = 40
 */
#include <iostream>
using namespace std;
int main() {
    double length, width, area;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    area = length * width;  // Area formula
    cout << "Area of Rectangle = " << area << endl;
    return 0;
}
