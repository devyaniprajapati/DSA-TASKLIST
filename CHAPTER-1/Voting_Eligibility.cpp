#include <iostream>
using namespace std;

// Function to check voting eligibility
void checkEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote!" << endl;
    } else {
        cout << "You are not eligible to vote. You need to be at least 18 years old." << endl;
    }
}

int main() {
    int age;
    
    // Taking user input
    cout << "Enter your age: ";
    cin >> age;
    
    // Checking eligibility
    checkEligibility(age);
    
    return 0;
}

