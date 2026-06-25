/*
 * Program: Array Input Output
 * Description: Demonstrates how to take input into an array and print it.
 *              An array is a collection of elements of the same type.
 *
 * Example Input:  N=5  elements: 10 20 30 40 50
 * Example Output: Array elements: 10 20 30 40 50
 */
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int numbers[100];  // Declare array with max 100 elements
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element [" << i << "]: ";
        cin >> numbers[i];  // Store input into array at index i
    }
    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";  // Print each element
    }
    cout << endl;
    return 0;
}
