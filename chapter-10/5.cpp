#include <iostream>
#include <algorithm> // For sort function
using namespace std;

// Function to sort a 1D array
void sortArray(int arr[], int size, bool ascending) {
    if (ascending)
        sort(arr, arr + size); // Sort in ascending order
    else
        sort(arr, arr + size, greater<int>()); // Sort in descending order
}

// Function to convert 1D array back to 2D array and print
void print2DArray(int arr[], int r, int c) {
    int index = 0;
    for (int i = 0; i < r; i++
