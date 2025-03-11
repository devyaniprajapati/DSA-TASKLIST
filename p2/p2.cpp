#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input for rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    // Input elements in the 2D array
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Finding the largest element
    int maxElement = arr[0][0]; // Assume first element is largest

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    // Output the largest element
    cout << "The largest element in the 2D array is: " << maxElement << endl;

    ret
