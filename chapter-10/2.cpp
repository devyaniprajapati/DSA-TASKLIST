#include <iostream>
using namespace std;

int main() {
    int r, c;
    double sum = 0.0;

    // Get the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    int arr[r][c]; // Declare 2D array

    // Input elements
    cout << "Enter " << r * c << " elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c
