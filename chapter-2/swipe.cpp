#include <iostream>
#include <utility> // For std::swap()

using namespace std;

// Method 1: Using a Temporary Variable
void swapWithTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Method 2: Using Arithmetic Operations (Addition & Subtraction)
void swapWithArithmetic(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Method 3: Using Bitwise XOR
void swapWithXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

// Method 4: Using std::swap()
void swapWithSTL(int &a, int &b) {
    swap(a, b);
}

int main() {
    int x = 10, y = 20;

    cout << "Original Values: x = " << x << ", y = " << y << endl;

    // Swap using temporary variable
    swapWithTemp(x, y);
    cout << "After swapWithTemp: x = " << x << ", y = " << y << endl;

    // Swap back
    swapWithArithmetic(x, y);
    cout << "After swapWithArithmetic: x = " << x << ", y = " << y << endl;

    // Swap using XOR
    swapWithXOR(x, y);
    cout << "After swapWithXOR: x = " << x << ", y = " << y << endl;

    // Swap using STL function
    swapWithSTL(x, y);
    cout << "After swapWithSTL: x = " << x << ", y = " << y << endl;

    return 0;
}

