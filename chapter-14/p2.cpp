#include <iostream>
using namespace std;

// Recursive function to calculate factorial of N
long long factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;  // Base case: 0! and 1! are both 1
    return n * factorial(n - 1);  // Recursive step
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (N <
