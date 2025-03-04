#include <iostream>
using namespace std;

// Function to print the multiplication table
void printTable(int num) {
    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " × " << i << " = " << num * i << endl;
    }
}

int main() {
    int num;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    // Call function to print table
    printTable(num);

    return 0;
}
