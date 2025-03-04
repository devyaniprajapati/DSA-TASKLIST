#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) { // Controls the rows (decreasing order)
        int start = (i % 2 == 0) ? 0 : 1; // Start with 1 for odd rows, 0 for even rows
        for (int j = 0; j < i; j++) { // Controls the columns
            cout << start << " ";
            start = 1 - start; // Toggle between 1 and 0
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Change this value for different pattern sizes
    printPattern(n);
    return 0;
}
