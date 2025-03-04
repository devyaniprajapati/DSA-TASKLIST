#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) { // Outer loop for rows
        for (int j = n; j > i; j--) { // Inner loop for printing numbers in decreasing order
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
