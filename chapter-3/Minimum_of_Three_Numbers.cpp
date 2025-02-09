#include <iostream>
using namespace std;

void findMin(int a, int b, int c) 
{
    int minNum;

    // Nested if-else to find the minimum number
    if (a < b)
	 {
        if (a < c)
		 {
            minNum = a;
        } 
		else 
		{
            minNum = c;
        }
    }
	 else {
        if (b < c) {
            minNum = b;
        } 
		else 
		{
            minNum = c;
        }
    }

    cout << "The minimum number is: " << minNum << endl;
}

int main() 
{
    int num1, num2, num3;

    // Input from user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Function call to find minimum
    findMin(num1, num2, num3);

    return 0;
}

