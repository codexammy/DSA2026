/*
 * Program: Prime Numbers in Range
 * Description: Prints all prime numbers between two given numbers.
 *
 * Example Input:  start=10  end=30
 * Example Output: 11 13 17 19 23 29
 */
#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int startRange, endRange;
    cout << "Enter start of range: ";
    cin >> startRange;
    cout << "Enter end of range:   ";
    cin >> endRange;
    cout << "Prime numbers between " << startRange << " and " << endRange << ":" << endl;
    for (int num = startRange; num <= endRange; num++) {
        if (checkPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
