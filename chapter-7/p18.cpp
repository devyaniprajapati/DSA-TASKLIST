#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) { // Controls the rows
        int start = 0; // Always start with 0
        for (int j = 0; j < i; j++) { // Controls the columns
            cout << start << " ";
            start = 1 - start; // Toggle between 0 and 1
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Change this value for different pattern sizes
    printPattern(n);
    return 0;
}
