#include <iostream>
#include <vector>
using namespace std;

void printPattern(int n) {
    vector<int> arr; // Using vector for dynamic storage

    // Fill the vector with numbers from n to 1
    for (int i = n; i >= 1; i--) {
        arr.push_back(i);
    }

    // Printing the pattern
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Change this value for different patterns
    printPattern(n);
    return 0;
}
