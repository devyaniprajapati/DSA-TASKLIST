#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Using for loop
    cout << "Using for loop: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Using while loop
    cout << "Using while loop: ";
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}
