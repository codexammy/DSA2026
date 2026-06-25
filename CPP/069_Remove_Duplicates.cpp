/*
 * Program: Remove Duplicates
 * Description: Removes duplicate elements from an array and prints unique elements.
 *
 * Example Input:  7 elements: 1 2 2 3 4 4 5
 * Example Output: Unique elements: 1 2 3 4 5
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
    cout << "Unique elements: ";
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;
        // Check if numbers[i] appeared before index i
        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
