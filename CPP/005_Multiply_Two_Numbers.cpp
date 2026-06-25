/*
 * Program: Multiply Two Numbers
 * Description: Takes two numbers and prints their product.
 *
 * Example Input:  6  7
 * Example Output: Product = 42
 */
#include <iostream>
using namespace std;
int main() {
    double firstNumber, secondNumber, product;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    product = firstNumber * secondNumber;
    cout << "Product = " << product << endl;
    return 0;
}
