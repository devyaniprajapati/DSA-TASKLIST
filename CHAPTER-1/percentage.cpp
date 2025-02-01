#include <iostream>
using namespace std;

void printGrade(float percentage) 
{
    if (percentage >= 90) 
	{
        cout << "Grade: A+" << endl;
    } 
	else if (percentage >= 80) 
	{
        cout << "Grade: A" << endl;
    } 
	else if (percentage >= 70) 
	{
        cout << "Grade: B" << endl;
    } 
	else if (percentage >= 60) 
	{
        cout << "Grade: C" << endl;
    }
	 else if (percentage >= 50) 
	 {
        cout << "Grade: D" << endl;
    }
	 else 
	 {
        cout << "Grade: F (Fail)" << endl;
    }
}

int main() 
{
    float percentage;
    cout << "Enter student percentage: ";
    cin >> percentage;

    if (percentage < 0 || percentage > 100) 
	{
        cout << "Invalid input! Percentage must be between 0 and 100." << endl;
    } else 
	{
        printGrade(percentage);
    }

    return 0;
}
