/*
 * Program: Fahrenheit to Celsius
 * Description: Converts a temperature from Fahrenheit to Celsius.
 *              Formula: C = (F - 32) * 5/9
 *
 * Example Input:  212
 * Example Output: 212 Fahrenheit = 100 Celsius
 */
#include <iostream>
using namespace std;
int main() {
    double fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << fahrenheit << " Fahrenheit = " << celsius << " Celsius" << endl;
    return 0;
}
