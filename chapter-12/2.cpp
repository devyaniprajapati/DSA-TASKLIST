#include <iostream>
using namespace std;

// Recursive function to print numbers from N to 1
void printReverse(int n) {
    if (n < 1) // Base case: stop when n is less than 1
        return;

    cout << n << " ";
    printReverse(n - 1); // Recursive call with previous number
}

int main() {
    int n;

    // Input number
    cout << "Enter the value of N: ";
    cin >> n;

    // Call recursive function
    cout << "Numbers from " << n << " to 1:\n";
    printReverse(n);

    return 0;
}
