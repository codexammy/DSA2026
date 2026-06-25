/*
 * Program: Second Largest Element
 * Description: Finds the second largest element in an array.
 *
 * Example Input:  5 elements: 10 5 20 8 15
 * Example Output: Second Largest = 15
 */
#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;
int main() {
    int size;
    cout << "Enter number of elements (at least 2): ";
    cin >> size;
    int numbers[100];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) cin >> numbers[i];
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;  // Old largest becomes second largest
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }
    if (secondLargest == INT_MIN)
        cout << "No second largest element (all elements are equal)." << endl;
    else
        cout << "Second Largest = " << secondLargest << endl;
    return 0;
}
