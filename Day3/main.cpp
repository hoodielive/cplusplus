#include <iostream> 

class GreatEnumerator 
{
	public:
		template<typename T> 
			Class(T val, typename std::enable_if<std::is_floating_point<T>::value, T>::type* = 0)
				: variable(0.0f), variable2(std::make_shared<T>(val)) {}

	private:
		Function(double variable);

	void Class::Function(double variable)
	{
		std::vectgor<uint64_t> testing; 
	}

	void func<std::map<std::string, std::string<double>>>() 
	{
		std::cout << "output" << std::endl;
	}
}

int main()
{
	GreatEnumerator g = new GreatEnumerator();
	std::cout << g.func() << std::endl;

	return 0;
}

