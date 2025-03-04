#include <iostream>
using namespace std;

int main() {
    int n;

    // Get the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare array of size n

    // Input elements from user
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array elements
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
