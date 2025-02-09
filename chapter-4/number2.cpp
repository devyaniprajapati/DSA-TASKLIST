#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Using for loop
    cout << "Using for loop: ";
    for (int i = n; i >= 1; i--) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Using while loop
    cout << "Using while loop: ";
    int i = n;
    while (i >= 1) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i--;
    }
    cout << endl;

    return 0;
}
