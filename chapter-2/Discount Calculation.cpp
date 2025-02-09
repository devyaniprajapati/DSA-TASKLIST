#include <iostream>
using namespace std;

// Function to calculate the discount and final price
void calculateDiscount(double price, double discountPercentage) {
    if (discountPercentage < 0 || discountPercentage > 100) {
        cout << "Invalid discount percentage!" << endl;
        return;
    }

    double discountAmount = (price * discountPercentage) / 100;
    double finalPrice = price - discountAmount;

    cout << "Original Price: $" << price << endl;
    cout << "Discount Applied: " << discountPercentage << "%" << endl;
    cout << "Discount Amount: $" << discountAmount << endl;
    cout << "Final Price After Discount: $" << finalPrice << endl;
}

int main() {
    double price, discountPercentage;

    // Input from user
    cout << "Enter the original price of the product: ";
    cin >> price;
    cout << "Enter the discount percentage: ";
    cin >> discountPercentage;

    // Calculate discount
    calculateDiscount(price, discountPercentage);

    return 0;
}

