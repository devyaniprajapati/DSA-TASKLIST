#include <iostream>
using namespace std;

int main() {
    int n = 9; // Number of terms
    int a = 3; // First term
    int diff = 5; // Initial difference

    cout << "Generated Sequence: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        a += diff;
        diff += 2; // Increment difference by 2
    }

    return 0;
}
