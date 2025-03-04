#include <iostream>
using namespace std;

void addArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i]; // Add corresponding elements
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};  // First array
    int arr2[] = {10, 20, 30, 40, 50}; // Second array
    int size = sizeof(arr1) / sizeof(arr1[0]); // Get array size

    int result[size]; // Array to store sum

    addArrays(arr1, arr2, result, size); // Function call

    cout << "Sum of two arrays: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " "; // Print the result array
    }

    return 0;
}
