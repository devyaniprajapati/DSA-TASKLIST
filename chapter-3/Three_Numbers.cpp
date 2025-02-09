#include <iostream>
using namespace std;

void findMax(int a, int b, int c) 
{
    int maxNum;

   
    if (a > b) 
	{
        if (a > c)
		 {
            maxNum = a;
        } 
        else 
		{
        	
            maxNum = c;
        }
    } 
    else 
	{
        if (b > c) 
		{
            maxNum = b;
        } 
        else
		 {
            maxNum = c;
        }
    }

    cout << "The maximum number is: " << maxNum << endl;
}

int main() 
{
    int num1, num2, num3;

    // Input from user
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Function call to find maximum
    
    findMax(num1, num2, num3);

    return 0;
}

