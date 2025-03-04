#include <iostream>
using namespace std;

void printPattern(int n) {
    int num = 1; // Initialize the starting number
    for (int i = 1; i <= n; i++) { // Controls the rows
        for (int j = 0; j < i; j++) { // Controls the columns
            cout << num << " ";
            num++; // Increment number for next position
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n = 5; // Change this value for different pattern sizes
    printPattern(n);
    return 0;
}
