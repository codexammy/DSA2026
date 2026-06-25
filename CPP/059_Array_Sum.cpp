/*
 * Program: Array Sum
 * Description: Calculates the sum of all elements in an array.
 *
 * Example Input:  4 elements: 10 20 30 40
 * Example Output: Sum of array elements = 100
 */
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int numbers[100];
    long long totalSum = 0;
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> numbers[i];
        totalSum += numbers[i];  // Add each element to the sum
    }
    cout << "Sum of array elements = " << totalSum << endl;
    return 0;
}
