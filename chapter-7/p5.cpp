#include <iostream>
using namespace std;

void printPattern() {
    // Define the fixed pattern structure
    string pattern[] = {
        "* * * * *",
        "* *",
        "* * * * *",
        "* *",
        "* *",
        "* *",
        "* *"
    };

    // Print the pattern
    for (const string &row : pattern) {
        cout << row << endl;
    }
}

int main() {
    printPattern();
    return 0;
}
