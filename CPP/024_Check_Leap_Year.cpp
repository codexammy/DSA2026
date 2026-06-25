/*
 * Program: Check Leap Year
 * Description: Determines if a given year is a leap year.
 *              Rules: Divisible by 4 AND (not divisible by 100 OR divisible by 400)
 *
 * Example Input:  2024
 * Example Output: 2024 is a Leap Year
 *
 * Example Input:  1900
 * Example Output: 1900 is NOT a Leap Year
 */
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // Leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year" << endl;
    } else {
        cout << year << " is NOT a Leap Year" << endl;
    }
    return 0;
}
