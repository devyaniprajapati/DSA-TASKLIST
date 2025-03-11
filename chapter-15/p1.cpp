#include <iostream>
using namespace std;

// Employee class
class Employee
 {
private:
    int id;
    string name;
    double salary;

public:
    //  employee details
    Employee(int empId, string empName, double empSalary) 
	{
        id = empId;
        name = empName;
        salary = empSalary;
    }


    void display()
	 {
        cout << "Employee ID: " << id << "\n";
        cout << "Employee Name: " << name << "\n";
        cout << "Employee Salary: " << salary << "\n";
        cout << "-----------------------------\n";
    }
};

int main()
 {
    // Creating  3 Employee objects
    Employee emp1(1, "meshwa", 50000);
    Employee emp2(2, "kirti", 60000);
    Employee emp3(3, "", 55000);

    // Printing employee details
    cout << "Employee Details:\n";
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}
