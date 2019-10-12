#include <iostream> 

struct Vector
{
	int sz; 
	double* elem;
};

void vector_init(Vector& v, int s)
{
	v.elem = new double[s];
	v.sz = s; 
}

int main()
{
	
}
