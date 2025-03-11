#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Taking input for the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Displaying the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int rowNum, colNum;

    // Sum of a specific row
    cout << "Enter the row number to find the sum (0-based index): ";
    cin >> rowNum;

    if (rowNum >= 0 && rowNum < rows) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[rowNum][j];
        }
        cout << "Sum of elements in row "
