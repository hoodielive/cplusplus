#include <iostream> 
#include <vector> 
#include <algorithm>
#include <iterator>

int main()
{
	std::vector<int> userInput; 
	// Read until end of input 
	// Hit ctrl+d 
	
	std::copy(std::istream_iterator<int>(std::cin),
			std::istream_iterator<int>(),
			std::back_inserter(userInput)
		 ); 

	// Print in Normal order
	std::copy(userInput.begin(),
			userInput.end(),
			std::ostream_iterator<int>(std::cout,",")
		 );
	std::cout << "\n"; 

	// Print in reverse order:
	std::copy(userInput.rbegin(),
			userInput.rend(),
			std::ostream_iterator<int>(std::cout,",")
		 ); 
	std::cout << "\n";

	// Update for C++11 
	// Range based for is now a good alternative
	for(auto const& value: userInput)
	{
		std::cout << value << ","; 
	}
	std::cout << "\n";
}
