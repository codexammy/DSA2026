/*
 * Program: Temperature Converter
 * Description: Converts temperature between Celsius, Fahrenheit, and Kelvin.
 *
 * Example Input:  100 Celsius
 * Example Output: Fahrenheit = 212
 *                 Kelvin = 373.15
 */
#include <iostream>
using namespace std;
int main() {
    int choice;
    double temperature;
    cout << "===== Temperature Converter =====" << endl;
    cout << "1. Celsius to Fahrenheit and Kelvin" << endl;
    cout << "2. Fahrenheit to Celsius and Kelvin" << endl;
    cout << "3. Kelvin to Celsius and Fahrenheit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter temperature: ";
    cin >> temperature;
    switch (choice) {
        case 1:
            cout << temperature << "°C = " << (temperature * 9/5 + 32) << "°F" << endl;
            cout << temperature << "°C = " << (temperature + 273.15) << " K" << endl;
            break;
        case 2:
            cout << temperature << "°F = " << ((temperature - 32) * 5/9) << "°C" << endl;
            cout << temperature << "°F = " << ((temperature - 32) * 5/9 + 273.15) << " K" << endl;
            break;
        case 3:
            cout << temperature << " K = " << (temperature - 273.15) << "°C" << endl;
            cout << temperature << " K = " << ((temperature - 273.15) * 9/5 + 32) << "°F" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
