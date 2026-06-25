/*
 * Program: Profit or Loss Calculator
 * Description: Calculates profit or loss percentage on a transaction.
 *
 * Example Input:  CostPrice=500  SellingPrice=600
 * Example Output: Profit = 100
 *                 Profit Percentage = 20%
 */
#include <iostream>
using namespace std;
int main() {
    double costPrice, sellingPrice, profitOrLoss, percentage;
    cout << "Enter cost price:    ";
    cin >> costPrice;
    cout << "Enter selling price: ";
    cin >> sellingPrice;
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        cout << "Profit = " << profitOrLoss << endl;
        cout << "Profit Percentage = " << percentage << "%" << endl;
    } else if (sellingPrice < costPrice) {
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        cout << "Loss = " << profitOrLoss << endl;
        cout << "Loss Percentage = " << percentage << "%" << endl;
    } else {
        cout << "No Profit, No Loss." << endl;
    }
    return 0;
}
