/*
 * Program: Find Maximum Element
 * Description: Finds the largest element in an array.
 *              Starts by assuming first element is max, then compares with rest.
 *
 * Example Input:  5 elements: 3 7 1 9 4
 * Example Output: Maximum element = 9
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
    int maximum = numbers[0];  // Assume first element is the largest
    for (int i = 1; i < size; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];  // Update max if a larger element is found
        }
    }
    cout << "Maximum element = " << maximum << endl;
    return 0;
}
