#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare array

    // Input elements into the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize min and max with the first element
    int min = arr[0], max = arr[0];

    // Find min and max
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min
        }
        if (arr[i] > max) {
            max =
