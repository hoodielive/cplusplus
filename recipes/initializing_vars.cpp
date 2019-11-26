#include <iostream>

class Classy
{
	private:
		int m_Member;

	public:
		Classy() = default;
		Classy(const Classy& rhs) = default;
};

int main()
{
	Classy objectA;
	Classy objectB;
	return 0;
}
