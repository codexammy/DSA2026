/*
 * Program: Grade Calculator
 * Description: Determines a student's grade based on their percentage.
 *              A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: below 60
 *
 * Example Input:  85
 * Example Output: Grade: B (Good)
 */
#include <iostream>
using namespace std;
int main() {
    double percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;
    if (percentage >= 90 && percentage <= 100) {
        cout << "Grade: A (Excellent)" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: B (Good)" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: C (Average)" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: D (Below Average)" << endl;
    } else if (percentage >= 0) {
        cout << "Grade: F (Fail)" << endl;
    } else {
        cout << "Invalid percentage entered." << endl;
    }
    return 0;
}
