#include <iostream>
#include "Log.cpp"

#define LOG(x) std::cout << x << std::endl;

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyandLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

void Loopss()
{
	// Loops
	for (int i = 0; i < 5; i++)
	{
		Log("Howdy Looper");
	}

	int i = 0;
	bool condition = true;

	while (i < 5)
	{
		Log("Howdy!");
		i++;
	}
}

void ThatsThePoint()
{
	// Pointers (integers that hold memory addresses) void* ptr = nullptr;

	int var = 8;                // stack
	void* ptr = &var;
  	*ptr;                       // dereference

	char* buffer = new char[8]; // allocate 8 chars - 8bytes to buffer
	memset(buffer, 0, 8);


	char** ptr2 = &buffer;      // pointer to pointer

	delete[] buffer;
}
void CanIGetAReference() {
	// References<Variables>
	int a = 5;
	int& ref = a;
	ref = 2;

	LOG(a);
}

void Increment(int* value)
{
	(*value)++;
}


void SomeIfStuff()
{

	int x = 5;

	bool comparisonResult = x == 5;

	if (comparisonResult)
	{
		Log("Hello, World");
	}
	else
	{
		Log("Thats okay.. ignore me then!");
	}

}

int main()
{

	int a = 5;

	Increment(&a);

	LOG(a);

	CanIGetAReference();

	Loopss();

	MultiplyandLog(3, 2);
	MultiplyandLog(30, 21);
	MultiplyandLog(10, 9);

	std::cin.get();
}
