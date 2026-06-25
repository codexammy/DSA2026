/*
 * Program: Matrix Addition
 * Description: Adds two 2D matrices of the same size.
 *              Each element at [row][col] of result = A[row][col] + B[row][col]
 *
 * Example Input:  2x2 Matrix A: 1 2 / 3 4   Matrix B: 5 6 / 7 8
 * Example Output: Result: 6 8 / 10 12
 */
#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows:    ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int matrixA[10][10], matrixB[10][10], resultMatrix[10][10];
    cout << "\nEnter elements of Matrix A:" << endl;
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++) {
            cout << "A[" << r << "][" << c << "] = ";
            cin >> matrixA[r][c];
        }
    cout << "\nEnter elements of Matrix B:" << endl;
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++) {
            cout << "B[" << r << "][" << c << "] = ";
            cin >> matrixB[r][c];
        }
    // Add corresponding elements
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            resultMatrix[r][c] = matrixA[r][c] + matrixB[r][c];
    cout << "\nSum Matrix (A + B):" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++)
            cout << resultMatrix[r][c] << "\t";
        cout << endl;
    }
    return 0;
}
