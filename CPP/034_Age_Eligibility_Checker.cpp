/*
 * Program: Age Eligibility Checker
 * Description: Checks eligibility for various activities based on age.
 *
 * Example Input:  18
 * Example Output: You are eligible to vote.
 *                 You are eligible to drive.
 */
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 0 || age > 120) {
        cout << "Please enter a valid age." << endl;
        return 1;
    }
    cout << "\n--- Eligibility Status ---" << endl;
    if (age >= 18)
        cout << "You ARE eligible to vote." << endl;
    else
        cout << "You are NOT eligible to vote (must be 18+)." << endl;
    if (age >= 18)
        cout << "You ARE eligible to drive." << endl;
    else
        cout << "You are NOT eligible to drive (must be 18+)." << endl;
    if (age >= 21)
        cout << "You ARE eligible to consume alcohol." << endl;
    else
        cout << "You are NOT eligible to consume alcohol (must be 21+)." << endl;
    if (age >= 65)
        cout << "You qualify for senior citizen benefits." << endl;
    return 0;
}
