#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = n; i >= 1; i--) { // Loop for rows
        for (int j = 1; j <= i; j++) { // Loop for columns
            cout << (j % 2); // Print alternating 1s and 0s
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
