/*
 * Program: Percentage Calculator
 * Description: Calculates the percentage of marks obtained.
 *              Formula: Percentage = (MarksObtained / TotalMarks) * 100
 *
 * Example Input:  MarksObtained=450  TotalMarks=600
 * Example Output: Percentage = 75%
 */
#include <iostream>
using namespace std;
int main() {
    double marksObtained, totalMarks, percentage;
    cout << "Enter marks obtained: ";
    cin >> marksObtained;
    cout << "Enter total marks: ";
    cin >> totalMarks;
    percentage = (marksObtained / totalMarks) * 100;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}
