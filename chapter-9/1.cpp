#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare array
    int sum = 0;

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each element to sum
    }

    // Calculate average
    double average = (double)sum / n;

    // Print average
    cout << "Average of the array: " << average << endl;

    return 0;
}
