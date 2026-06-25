/*
 * Program: Area of Circle
 * Description: Calculates the area of a circle given its radius.
 *              Formula: Area = PI * radius * radius
 *
 * Example Input:  radius=7
 * Example Output: Area of Circle = 153.938
 */
#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159265358979;  // PI is a constant value
    double radius, area;
    cout << "Enter radius of circle: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "Area of Circle = " << area << endl;
    return 0;
}
