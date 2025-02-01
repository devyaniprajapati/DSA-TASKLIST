#include <iostream>
using namespace std;

void checkDivisibility(int num) 
{
    if (num % 7 == 0) 
	{
        cout << num << " is divisible by 7." << endl;
    }
	else 
	 {
        cout << num << " is not divisible by 7." << endl;
    }
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checkDivisibility(num);

    return 0;
}
