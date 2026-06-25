/*
 * Program: Linear Search
 * Description: Searches for a target element in an array one by one.
 *              Checks each element from start to end until found.
 *
 * Example Input:  Array: 5 3 8 1 9  Target: 8
 * Example Output: Element 8 found at index 2 (position 3)
 */
#include <iostream>
using namespace std;
int main() {
    int size, target;
    cout << "Enter number of elements: ";
    cin >> size;
    int numbers[100];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    cout << "Enter element to search: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            cout << "Element " << target << " found at index " << i
                 << " (position " << (i + 1) << ")" << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}
