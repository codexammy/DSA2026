/*
 * Program: Sort Array Descending
 * Description: Sorts an array in descending order using Bubble Sort.
 *              Swaps elements when the left is smaller than the right.
 *
 * Example Input:  5 elements: 64 34 25 12 22
 * Example Output: Sorted: 64 34 25 22 12
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
    // Bubble Sort in descending order
    for (int pass = 0; pass < size - 1; pass++) {
        for (int j = 0; j < size - pass - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {  // Swap if smaller is on left
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    cout << "Sorted in Descending order: ";
    for (int i = 0; i < size; i++) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
