#include <iostream>
using namespace std;

int main() {
    int start = 11; // Starting number
    int end = 20;   // Ending number
    int num = start; // Variable to keep track of numbers

    for (int i = 1; num <= end; i++) { // Row loop
        for (int j = 1; j <= i && num <= end; j++) { // Column loop
            cout << num << " ";
            num++; // Increment number
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
