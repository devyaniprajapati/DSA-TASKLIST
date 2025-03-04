#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) { // Loop for rows
        for (int j = 1; j <= i; j++) { // Loop for printing '*'
            cout << "* ";
        }
        cout << endl; // Move to the next line
    }
}

int main() {
    int n = 5; // Change this value to modify the pattern
    printPattern(n);
    return 0;
}
