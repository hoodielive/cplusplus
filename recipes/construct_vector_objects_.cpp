#include <iostream>
#include <vector>

int main()
{
	using aVector = std::vector<int>;

	aVector vectorA( 1 );
	std::cout << vectorA.size() << " " << vectorA[0] << std::endl;

	aVector vectorB( 1, 10 );
	std::cout << vectorB.size() << " " << vectorB[0] << std::endl;

	intializer_list<int> initList{1, 10};
	aVector vectorC(initList);
	std::cout << vectorC.size() << " " << vectorC[0] << std::endl;

	return 0;
}
