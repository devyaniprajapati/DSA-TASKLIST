#include <iostream>
using namespace std;

void printEvenNumbers(int arr[], int size) {
    cout << "Even numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { // Check if even
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {12, 7, 9, 18, 22, 33, 40, 55}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    printEvenNumbers(arr, size); // Function call

    return 0;
}
