#include <iostream>
using namespace std;

// Recursive function to print numbers from 1 to n
void printNumbers(int n, int current = 1) {
    if (current > n) // Base case: stop when current exceeds n
        return;

    cout << current << " ";
    printNumbers(n, current + 1); // Recursive call with next number
}

int main() {
    int n;

    // Input number
    cout << "Enter the value of N: ";
    cin >> n;

    // Call recursive function
    cout << "Numbers from 1 to " << n << ":\n";
    printNumbers(n);

    return 0;
}
