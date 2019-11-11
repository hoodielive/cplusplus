#include <iostream> 
#include <string> 
#include <cmath>
#include <numeric>

using namespace std;

int main (int argc, char** argv) 
{
	std::string q1 = "Enter a Number: "; 
	string num1, num2; 
	
	std::cout << q1 << std::endl; 
	cin >> num1; 
	cout << "Enter another number: "; 
	cin >> num2; 

	int nNum1 = stoi(num1); 
	int nNum2 = stoi(num2); 

	printf("%d + %d = %d\n", num1, num2, (num1 + num2));
	return 0; 
}
