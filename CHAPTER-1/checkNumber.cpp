#include <iostream>
using namespace std;

void checkNumber(int num) 
{
    if (num > 0) 
	{
        cout << num << " is a Positive number." << endl;
    } 
	else if (num < 0) 
	{
        cout << num << " is a Negative number." << endl;
    } 
	else 
	{
        cout << num << " is Neutral (Zero)." << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checkNumber(num);

    return 0;
}
