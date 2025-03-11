#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking array size input
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declaring array

    // Taking array elements as input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Finding and printing negative numbers
    cout << "Negative elements in the array: ";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No negative numbers found.";
    }

    return 0;
}
