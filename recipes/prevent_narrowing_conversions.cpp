#include <iostream>

int main()
{
	// this code will not compile due to narrowing conversions.
	int number{ 0 };
	char another{ 512 };

	double bigNumber{ 1.0 };
	float littleNumber{ bigNumber };

	return 0;
}
