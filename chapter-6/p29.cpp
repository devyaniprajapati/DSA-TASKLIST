#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) { // Controls the rows
        for (int j = 0; j < i; j++) { // Controls the columns
            if (j % 2 == 0) {
                cout << "| "; // Print '|' for even index
            } else {
                cout << "- "; // Print '-' for odd index
            }
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n = 4; // Change this value for different pattern sizes
    printPattern(n);
    return 0;
}
