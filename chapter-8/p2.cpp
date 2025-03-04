#include <iostream>
using namespace std;

int findSum(int arr[], int size) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to sum
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    int totalSum = findSum(arr, size); // Function call
    cout << "Sum of all elements: " << totalSum << endl;

    return 0;
}
