#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Outer loop for rows
        for (int j = n; j >= n - i + 1; j--) { // Inner loop for printing numbers in reverse order
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
