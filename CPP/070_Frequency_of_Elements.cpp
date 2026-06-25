/*
 * Program: Frequency of Elements
 * Description: Counts how many times each unique element appears in the array.
 *
 * Example Input:  6 elements: 1 2 2 3 3 3
 * Example Output: 1 -> 1 time(s)
 *                 2 -> 2 time(s)
 *                 3 -> 3 time(s)
 */
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int numbers[100];
    bool counted[100] = {false};  // Track which elements we've already counted
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) cin >> numbers[i];
    cout << "\nFrequency of each element:" << endl;
    for (int i = 0; i < size; i++) {
        if (!counted[i]) {
            int frequency = 1;
            for (int j = i + 1; j < size; j++) {
                if (numbers[j] == numbers[i]) {
                    frequency++;
                    counted[j] = true;  // Mark so we don't count it again
                }
            }
            cout << numbers[i] << " -> " << frequency << " time(s)" << endl;
            counted[i] = true;
        }
    }
    return 0;
}
