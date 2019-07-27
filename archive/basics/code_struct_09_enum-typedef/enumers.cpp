#include <iostream> 



int main()
{
	enum MONTHS {Jan, Feb, Mar, April, May, June, July, August, September, October, November, December};
	
	MONTHS bestMonth; 
	bestMonth = May; 

	if ( bestMonth == May ) 
	{
		std::cout << "The very best Month is: " << bestMonth << std::endl; 
	}

	return 0; 
}
