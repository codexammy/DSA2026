/*
 * Program: Student Grade Report
 * Description: Takes marks for 5 subjects, calculates total, percentage, and grade.
 *
 * Example Input:  Marks: 85 90 78 92 88
 * Example Output: Total = 433, Percentage = 86.6%, Grade = A
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string subjects[] = {"Mathematics", "Science", "English", "History", "Computer"};
    int marks[5];
    int totalMarks = 0;
    const int MAX_MARKS = 100;
    cout << "===== Student Grade Report =====" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for " << subjects[i] << " (out of 100): ";
        cin >> marks[i];
        totalMarks += marks[i];
    }
    double percentage = (double)totalMarks / (5 * MAX_MARKS) * 100;
    string grade;
    if (percentage >= 90)      grade = "A+ (Outstanding)";
    else if (percentage >= 80) grade = "A  (Excellent)";
    else if (percentage >= 70) grade = "B  (Good)";
    else if (percentage >= 60) grade = "C  (Average)";
    else if (percentage >= 50) grade = "D  (Pass)";
    else                       grade = "F  (Fail)";
    cout << "\n--- Report Card ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << subjects[i] << ": " << marks[i] << endl;
    }
    cout << "Total Marks: " << totalMarks << " / " << (5 * MAX_MARKS) << endl;
    cout << "Percentage:  " << percentage << "%" << endl;
    cout << "Grade:       " << grade << endl;
    return 0;
}
