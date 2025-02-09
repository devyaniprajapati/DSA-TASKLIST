#include <iostream>
using namespace std;

void calculateBill(int units) {
    double billAmount;

   
    if (units <= 100) 
	{
        billAmount = units * 1.5;
    } 
    else 
	{
        if (units <= 200) 
		{
            billAmount = (100 * 1.5) + ((units - 100) * 2.0);
        } 
        else
		 {
		 	
            if (units <= 300)
			 {
                billAmount = (100 * 1.5) + (100 * 2.0) + ((units - 200) * 3.0);
            } 
            else 
			{
                billAmount = (100 * 1.5) + (100 * 2.0) + (100 * 3.0) + ((units - 300) * 5.0);
            }
            
        }
    }

    cout << "Total Electricity Bill: ?" << billAmount << endl;
}

int main() 
{
    int units;

  
    cout << "Enter the number of units consumed: ";
    
    cin >> units;

   
    if (units < 0) 
	{
        cout << "Invalid input! Units cannot be negative." << endl;
    } 
    else 
	{
        calculateBill(units);
    }

    return 0;
}

