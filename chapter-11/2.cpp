#include <iostream>
using namespace std;

// Function to calculate cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int num;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    // Call function and display result
    cout << "Cube of " << num << " is: " << cube(num) << endl;

    return 0;
}
