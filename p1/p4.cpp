#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) { // Loop for rows
        // Print spaces for pyramid alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print numbers decreasing from 5
        for (int j = 5; j >= 6 - i; j--) {
            cout << j << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
