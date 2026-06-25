/*
 * Program: Electricity Bill Calculator
 * Description: Calculates electricity bill based on units consumed.
 *              Rates: 0-100 units = Rs 1.5/unit
 *                     101-200 units = Rs 2.5/unit
 *                     201-300 units = Rs 4.0/unit
 *                     Above 300 units = Rs 5.0/unit
 *
 * Example Input:  250
 * Example Output: Total Bill = Rs 775
 */
#include <iostream>
using namespace std;
int main() {
    int unitsConsumed;
    double totalBill;
    cout << "Enter units of electricity consumed: ";
    cin >> unitsConsumed;
    if (unitsConsumed <= 100) {
        totalBill = unitsConsumed * 1.5;
    } else if (unitsConsumed <= 200) {
        totalBill = (100 * 1.5) + ((unitsConsumed - 100) * 2.5);
    } else if (unitsConsumed <= 300) {
        totalBill = (100 * 1.5) + (100 * 2.5) + ((unitsConsumed - 200) * 4.0);
    } else {
        totalBill = (100 * 1.5) + (100 * 2.5) + (100 * 4.0) + ((unitsConsumed - 300) * 5.0);
    }
    cout << "Total Bill = Rs " << totalBill << endl;
    return 0;
}
