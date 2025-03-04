#include <iostream>
using namespace std;

void printPattern(int n) {
    // First half: Increasing pattern
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= i; j++) { 
            cout << j << " ";
        }
        cout << endl;
    }

    // Second half: Decreasing pattern
    for (int i = n - 1; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Change this value for different pattern sizes
    printPattern(n);
    return 0;
}
