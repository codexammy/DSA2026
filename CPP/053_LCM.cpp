/*
 * Program: LCM (Least Common Multiple)
 * Description: Finds the LCM of two numbers.
 *              Formula: LCM(a, b) = (a * b) / GCD(a, b)
 *
 * Example Input:  4  6
 * Example Output: LCM of 4 and 6 = 12
 */
#include <iostream>
using namespace std;
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    cout << "Enter first number:  ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int gcd = findGCD(num1, num2);
    long long lcm = (long long)num1 / gcd * num2;  // Avoid overflow
    cout << "LCM of " << num1 << " and " << num2 << " = " << lcm << endl;
    return 0;
}
