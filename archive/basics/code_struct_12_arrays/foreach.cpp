#include <iostream> 
#include <string> 
using std::string; 

int main() 
{
	int B[6]={2,3,4};
	float C[]={2.5f,3.2f,4.9f,5.0f,6,7,8,9}; 
	string str[]={"love", "patience", "forgiveness", "friendship"};

	for (int x: B)
	{
		std::cout << "This element is: " << x << std::endl; 
	}

	for (float c: C)
	{
		std::cout << "This element is: " << c << std::endl; 
	}

	for (auto d: str)
		std::cout << "We should aspire toward: " << d << std::endl; 
	return 0;
}
