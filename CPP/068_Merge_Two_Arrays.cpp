/*
 * Program: Merge Two Arrays
 * Description: Merges two arrays into a single combined array.
 *
 * Example Input:  Array1: 1 3 5  Array2: 2 4 6
 * Example Output: Merged: 1 3 5 2 4 6
 */
#include <iostream>
using namespace std;
int main() {
    int size1, size2;
    cout << "Enter size of first array:  ";
    cin >> size1;
    int array1[100];
    cout << "Enter " << size1 << " elements for array 1:" << endl;
    for (int i = 0; i < size1; i++) cin >> array1[i];
    cout << "Enter size of second array: ";
    cin >> size2;
    int array2[100];
    cout << "Enter " << size2 << " elements for array 2:" << endl;
    for (int i = 0; i < size2; i++) cin >> array2[i];
    // Create a merged array
    int mergedArray[200];
    int mergedSize = 0;
    for (int i = 0; i < size1; i++) mergedArray[mergedSize++] = array1[i];
    for (int i = 0; i < size2; i++) mergedArray[mergedSize++] = array2[i];
    cout << "Merged array: ";
    for (int i = 0; i < mergedSize; i++) cout << mergedArray[i] << " ";
    cout << endl;
    return 0;
}
