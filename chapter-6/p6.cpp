#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) 
	{ // Outer loop for rows (starting from n down to 1)
        for (int j = 1; j <= (n - i + 1); j++)
		 { // Inner loop for printing numbers
            cout << i << " "; // Print the current row number
        }
        cout << endl;
    }

    return 0;
}
