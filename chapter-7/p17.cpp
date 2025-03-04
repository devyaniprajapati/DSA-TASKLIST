#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) { // Controls the rows
        int start = 1; // Always start with 1
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
