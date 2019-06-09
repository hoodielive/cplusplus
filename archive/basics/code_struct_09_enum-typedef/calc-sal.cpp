#include <iostream> 

using namespace std; 

int main()
{
	int salary,sum; 
	float percentages,deductions;

	// NetSalary = Basic Salary + Basic Salary * Percentage of Allowances - Basic Salary * Percentage of Deductions
	
	salary = 100000; 
	percentages = .20; 
	deductions = .5; 
	
	sum = salary * percentages - deductions; 

	cout << sum << endl; 

	return 0; 
	
	
}
