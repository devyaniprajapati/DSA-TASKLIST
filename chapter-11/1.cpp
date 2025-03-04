#include <iostream>
using namespace std;

// Function to calculate square of a number
int square(int num) {
    return num * num;
}

int main() {
    int num;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    // Call function and display result
    cout << "Square of " << num << " is: " << square(num) << endl;

    return 0;
}
