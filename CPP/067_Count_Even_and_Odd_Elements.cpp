/*
 * Program: Count Even and Odd Elements
 * Description: Counts how many elements in an array are even and how many are odd.
 *
 * Example Input:  6 elements: 1 2 3 4 5 6
 * Example Output: Even count = 3, Odd count = 3
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
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Even count = " << evenCount << endl;
    cout << "Odd count  = " << oddCount << endl;
    return 0;
}
