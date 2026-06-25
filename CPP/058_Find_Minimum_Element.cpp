/*
 * Program: Find Minimum Element
 * Description: Finds the smallest element in an array.
 *
 * Example Input:  5 elements: 3 7 1 9 4
 * Example Output: Minimum element = 1
 */
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int numbers[100];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    int minimum = numbers[0];  // Assume first element is the smallest
    for (int i = 1; i < size; i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];  // Update min if a smaller element is found
        }
    }
    cout << "Minimum element = " << minimum << endl;
    return 0;
}
