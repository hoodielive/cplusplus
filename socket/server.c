#include <iostream>

using namespace std;

class Point
{
	public:
		double x, y;
};

class Vector
{
	public:
		Point start, end;
};

void offset(Point p, double dx, double dy)
{
	p.x += dx;
	p.y += dy;
}

int main()
{
	Point p;
	p.x = 1.0;
	p.y = 2.0;

	offset(p, 3.0, 4.0);
	cout << "p(" << p.x << ")"  << endl;
}
