#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    // Check if the number is even or odd
    if (num % 2 == 0) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }
}

int main() {
    int number;

    // Input from user
    cout << "Enter a number: ";
    cin >> number;

    // Function call to check even or odd
    checkEvenOdd(number);

    return 0;
}

