/*
 * Program: Salary Calculator
 * Description: Calculates net salary after adding allowances and deducting taxes.
 *              Basic Salary + HRA (20%) + DA (10%) - Tax (10%)
 *
 * Example Input:  BasicSalary=50000
 * Example Output: Gross Salary = 65000
 *                 Tax Deduction = 6500
 *                 Net Salary = 58500
 */
#include <iostream>
using namespace std;
int main() {
    double basicSalary, hra, da, grossSalary, taxDeduction, netSalary;
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    hra = basicSalary * 0.20;           // House Rent Allowance = 20%
    da  = basicSalary * 0.10;           // Dearness Allowance = 10%
    grossSalary = basicSalary + hra + da;
    taxDeduction = grossSalary * 0.10;  // Tax = 10% of gross
    netSalary = grossSalary - taxDeduction;
    cout << "Gross Salary  = " << grossSalary << endl;
    cout << "Tax Deduction = " << taxDeduction << endl;
    cout << "Net Salary    = " << netSalary << endl;
    return 0;
}
