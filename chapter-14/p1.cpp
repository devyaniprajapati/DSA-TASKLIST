#include <iostream>
using namespace std;

// Recursive function to calculate sum from 1 to N
int sumN(int n) {
    if (n == 0) 
        return 0;  // Base case: sum of numbers up to 0 is 0
    return n + sumN(n - 1);  // Recursive step
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Sum of numbers from 1 to " << N << " is: " << sumN(N) << endl;

    return 0;
}
