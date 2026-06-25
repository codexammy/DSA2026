/*
 * Program: Unit Converter
 * Description: Converts between common units of length, weight, and volume.
 *
 * Example Input:  1 kilometer
 * Example Output: = 1000 meters = 100000 centimeters = 0.621371 miles
 */
#include <iostream>
using namespace std;
int main() {
    int category, unit;
    double value;
    cout << "===== Unit Converter =====" << endl;
    cout << "1. Length" << endl;
    cout << "2. Weight" << endl;
    cout << "3. Volume" << endl;
    cout << "Choose category: ";
    cin >> category;
    if (category == 1) {
        cout << "\n1. Kilometers  2. Miles  3. Meters  4. Feet" << endl;
        cout << "Convert FROM (enter number): ";
        cin >> unit;
        cout << "Enter value: ";
        cin >> value;
        double meters;  // Convert everything to meters first
        if      (unit == 1) meters = value * 1000;
        else if (unit == 2) meters = value * 1609.34;
        else if (unit == 3) meters = value;
        else                meters = value * 0.3048;
        cout << "\nConversions:" << endl;
        cout << meters / 1000   << " kilometers" << endl;
        cout << meters / 1609.34 << " miles" << endl;
        cout << meters           << " meters" << endl;
        cout << meters / 0.3048  << " feet" << endl;
    } else if (category == 2) {
        cout << "\n1. Kilograms  2. Pounds  3. Grams" << endl;
        cout << "Convert FROM: ";
        cin >> unit;
        cout << "Enter value: ";
        cin >> value;
        double grams;
        if      (unit == 1) grams = value * 1000;
        else if (unit == 2) grams = value * 453.592;
        else                grams = value;
        cout << "\nConversions:" << endl;
        cout << grams / 1000    << " kilograms" << endl;
        cout << grams / 453.592 << " pounds" << endl;
        cout << grams           << " grams" << endl;
    } else if (category == 3) {
        cout << "\n1. Liters  2. Gallons  3. Milliliters" << endl;
        cout << "Convert FROM: ";
        cin >> unit;
        cout << "Enter value: ";
        cin >> value;
        double ml;
        if      (unit == 1) ml = value * 1000;
        else if (unit == 2) ml = value * 3785.41;
        else                ml = value;
        cout << "\nConversions:" << endl;
        cout << ml / 1000    << " liters" << endl;
        cout << ml / 3785.41 << " gallons" << endl;
        cout << ml           << " milliliters" << endl;
    } else {
        cout << "Invalid category!" << endl;
    }
    return 0;
}
