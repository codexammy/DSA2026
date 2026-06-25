/*
 * Program: Reverse Array
 * Description: Reverses the elements of an array in place.
 *              Swaps first with last, second with second-last, and so on.
 *
 * Example Input:  5 elements: 1 2 3 4 5
 * Example Output: Reversed: 5 4 3 2 1
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
    // Swap elements from both ends moving towards center
    int left = 0, right = size - 1;
    while (left < right) {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
        left++;
        right--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
