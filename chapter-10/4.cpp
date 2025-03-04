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

    // Input elements into the array
    cout << "Enter " << r * c << " elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    // Initialize min and max with the first element
    int min = arr[0][0], max = arr[0][0];

    // Find min and max
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j]; // Update min
            }
            if (arr[i][j] > max) {
                max = arr[i][j]; // Update max
            }
        }
    }

    // Display results
    cout << "Minimum element: " << min << endl;
   
