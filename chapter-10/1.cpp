#include <iostream>
using namespace std;

int main() {
    int r, c;

    // Get the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    int arr[r][c]; // Declare 2D array

    // Input elements
    cout << "Enter " << r * c << " elements: \n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the 2D array
    cout << "The 2D array is: \n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
