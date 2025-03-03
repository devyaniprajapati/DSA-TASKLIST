#include <iostream>
using namespace std;

int main() {
    cout << "Leap years between 2000 and 3000 using while loop:\n";
    int year = 2000;
    while (year <= 3000)
	 {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
		{
            cout << year << " ";
        }
        year++;
    }
    cout << endl;
    return 0;
}
