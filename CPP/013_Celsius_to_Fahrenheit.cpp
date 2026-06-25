/*
 * Program: Celsius to Fahrenheit
 * Description: Converts a temperature from Celsius to Fahrenheit.
 *              Formula: F = (C * 9/5) + 32
 *
 * Example Input:  100
 * Example Output: 100 Celsius = 212 Fahrenheit
 */
#include <iostream>
using namespace std;
int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    return 0;
}
