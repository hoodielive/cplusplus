#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <cmath>

int imGlobal = 0;
const double PI = 3.14;
bool married = true;
char myGrade = 'A';
short int smallNum = 10;

int main(int argc, char** argv)
{
	float f1 = 1.1111111;
	float f2 = 1.1111111;

	printf("Sum = %.7f\n", (f1 + f2));
	
	auto whatAmI = true; 

	std::cout << "Hello" << std::endl;
	std::cout << "Min Double" << std::numeric_limits<double>::min() << std::endl;
}
