/*
 * Program: Sum of N Numbers
 * Description: Calculates the sum of first N natural numbers.
 *
 * Example Input:  5
 * Example Output: Sum of first 5 natural numbers = 15
 */
#include <iostream>
using namespace std;
int main() {
    int n;
    long long sum = 0;  // Use long long to handle large sums
    cout << "Enter the value of N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;  // Add i to sum in each iteration
    }
    cout << "Sum of first " << n << " natural numbers = " << sum << endl;
    return 0;
}
