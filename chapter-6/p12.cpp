#include <iostream>
#include <vector>
using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        vector<int> row(i, i); // Create a vector of size 'i' filled with value 'i'
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl; // Move to next line
    }
}

int main() {
    int n = 5; // Change this value to modify pattern
    printPattern(n);
    return 0;
}
