/*
 * Program: Array Average
 * Description: Calculates the average of all elements in an array.
 *              Average = Sum of all elements / Number of elements
 *
 * Example Input:  4 elements: 10 20 30 40
 * Example Output: Average = 25
 */
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int numbers[100];
    double totalSum = 0;
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> numbers[i];
        totalSum += numbers[i];
    }
    double average = totalSum / size;
    cout << "Average = " << average << endl;
    return 0;
}
