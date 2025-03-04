#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int source[n], destination[n]; // Declare two arrays

    // Input elements into source array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> source[i];
        destination[i] = source[i]; // Copy elements
    }

    // Display copied elements
    cout << "Elemen
