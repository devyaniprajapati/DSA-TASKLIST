#include <iostream>
using namespace std;

void printPattern(int n) {
    // First half: Decreasing pattern
    for (int i = n; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << j << " ";
        }
        cout << endl;
    }

    // Second half: Increasing pattern
    for (int i = 2; i <= n; i++) { 
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
