/*
 * Program: Simple Interest
 * Description: Calculates simple interest on a principal amount.
 *              Formula: SI = (Principal * Rate * Time) / 100
 *
 * Example Input:  Principal=1000  Rate=5  Time=3
 * Example Output: Simple Interest = 150
 *                 Total Amount = 1150
 */
#include <iostream>
using namespace std;
int main() {
    double principal, rate, time, simpleInterest, totalAmount;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (%): ";
    cin >> rate;
    cout << "Enter time period (years): ";
    cin >> time;
    simpleInterest = (principal * rate * time) / 100;
    totalAmount = principal + simpleInterest;
    cout << "Simple Interest = " << simpleInterest << endl;
    cout << "Total Amount    = " << totalAmount << endl;
    return 0;
}
