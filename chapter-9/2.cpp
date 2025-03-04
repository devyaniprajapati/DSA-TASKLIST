#include <iostream>
using namespace std;

void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare array

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print multiplication table for each element
    cout << "\nMultiplication Tables:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nTable of " << arr[i] << ":\n";
        printTable(arr[i]);
    }

    return 0;
}
