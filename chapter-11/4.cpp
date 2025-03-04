#include <iostream>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    // Check for negative input
    if (num < 0) {
        
