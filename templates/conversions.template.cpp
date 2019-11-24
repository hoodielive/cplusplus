#include <iostream> 

template<typename T> 
T Add(T x, T y)
{
	return x + y; 
}

template<type A> 
A ArraySum(A *pArr, A arrSize)
{
	return *pArr > arrSize ? *pArr : arrSize; 
}

int main() 
{
	return 0; 
}
