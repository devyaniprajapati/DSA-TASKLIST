#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Even numbers from " << n << " to 1 using while loop: ";
    int i = n;
    while (i >= 1) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i--;
    }
    cout << endl;

    return 0;
}
