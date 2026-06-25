/*
 * Program: Average of Numbers
 * Description: Reads N numbers and calculates their average.
 *
 * Example Input:  N=4  numbers: 10 20 30 40
 * Example Output: Average = 25
 */
#include <iostream>
using namespace std;
int main() {
    int count;
    double number, sum = 0, average;
    cout << "How many numbers do you want to average? ";
    cin >> count;
    for (int i = 1; i <= count; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number;  // Add each number to the running total
    }
    average = sum / count;
    cout << "Average = " << average << endl;
    return 0;
}
