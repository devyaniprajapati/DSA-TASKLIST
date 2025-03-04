#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) { 
        // First half: Increasing numbers
        for (int j = 1; j <= i; j++) { 
            cout << j << " ";
        }

        // Second half: Decreasing numbers (mirrored part)
        for (int j = i; j >= 1; j--) { 
            cout << j << " ";
        }
        
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n = 5; // Change this value for different pattern sizes
    printPattern(n);
    return 0;
}
