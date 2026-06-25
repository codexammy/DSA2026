/*
 * Program: Sort Array Ascending
 * Description: Sorts an array in ascending order using Bubble Sort.
 *              Bubble Sort repeatedly compares adjacent elements and swaps them
 *              if they are in the wrong order.
 *
 * Example Input:  5 elements: 64 34 25 12 22
 * Example Output: Sorted: 12 22 25 34 64
 */
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int numbers[100];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) cin >> numbers[i];
    // Bubble Sort - runs (size-1) passes
    for (int pass = 0; pass < size - 1; pass++) {
        for (int j = 0; j < size - pass - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {  // Swap if out of order
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    cout << "Sorted in Ascending order: ";
    for (int i = 0; i < size; i++) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
