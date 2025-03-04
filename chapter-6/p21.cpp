#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) 
	{ // Controls the rows
        char ch = 'A'; // Initialize character to 'A'
        for (int j = 0; j < i; j++) 
		{ // Controls the columns
            cout << ch << " ";
            ch++; // Move to the next letter
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n = 5; // Change this value for different pattern sizes
    printPattern(n);
    return 0;
}
