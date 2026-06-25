/*
 * Program: Compound Interest
 * Description: Calculates compound interest.
 *              Formula: A = P * (1 + r/100)^t
 *                       CI = A - P
 *
 * Example Input:  Principal=1000  Rate=10  Time=2
 * Example Output: Compound Interest = 210
 *                 Total Amount = 1210
 */
#include <iostream>
#include <cmath>   // For the pow() function
using namespace std;
int main() {
    double principal, rate, time, totalAmount, compoundInterest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (%): ";
    cin >> rate;
    cout << "Enter time period (years): ";
    cin >> time;
    // pow(base, exponent) calculates base raised to the power of exponent
    totalAmount = principal * pow((1 + rate / 100), time);
    compoundInterest = totalAmount - principal;
    cout << "Compound Interest = " << compoundInterest << endl;
    cout << "Total Amount      = " << totalAmount << endl;
    return 0;
}
