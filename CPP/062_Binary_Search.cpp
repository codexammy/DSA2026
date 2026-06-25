/*
 * Program: Binary Search
 * Description: Efficiently searches a SORTED array by repeatedly halving the search space.
 *              Works by comparing target with middle element.
 *              Much faster than linear search for large arrays.
 *
 * Example Input:  Sorted Array: 2 5 8 12 16  Target: 12
 * Example Output: Element 12 found at index 3
 */
#include <iostream>
using namespace std;
int main() {
    int size, target;
    cout << "Enter number of elements (must enter in SORTED order): ";
    cin >> size;
    int numbers[100];
    cout << "Enter " << size << " sorted elements:" << endl;
    for (int i = 0; i < size; i++) cin >> numbers[i];
    cout << "Enter element to search: ";
    cin >> target;
    int low = 0, high = size - 1, mid;
    bool found = false;
    while (low <= high) {
        mid = (low + high) / 2;  // Find the middle index
        if (numbers[mid] == target) {
            cout << "Element " << target << " found at index " << mid << endl;
            found = true;
            break;
        } else if (numbers[mid] < target) {
            low = mid + 1;   // Target is in the right half
        } else {
            high = mid - 1;  // Target is in the left half
        }
    }
    if (!found) cout << "Element " << target << " not found." << endl;
    return 0;
}
