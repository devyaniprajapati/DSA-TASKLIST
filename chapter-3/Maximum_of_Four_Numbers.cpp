#include <iostream>
using namespace std;

void findMax(int a, int b, int c, int d) 
{
    int maxNum;

   
    if (a > b)
	 {
        if (a > c)
		 {
            if (a > d) 
			{
                maxNum = a;
            } else 
			{
                maxNum = d;
            }
        }
		 else 
		{
            if (c > d) 
			{
                maxNum = c;
            } 
			else 
			{
                maxNum = d;
            }
        }
    } 
    else 
	{
        if (b > c) 
		{
            if (b > d) 
			{
                maxNum = b;
            } 
			else 
			{
                maxNum = d;
            }
        }
		 else
		  {
            if (c > d)
			 {
                maxNum = c;
            }
			 else
			  {
                maxNum = d;
            }
        }
    }

    cout << "The maximum number is: " << maxNum << endl;
}

int main() {
    int num1, num2, num3, num4;

    // Input from user
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Function call to find maximum
    findMax(num1, num2, num3, num4);

    return 0;
}

