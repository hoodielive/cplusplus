#include <iostream>

double square(double x)
{
    return x * x;
};

void print_square(double x)
{
    std::cout << "The square of" << x << "is " << square(x) << std::endl;
};

int maii()
{
    double d = 2.2;
    std::cout << d << std::endl;
    int i = 7;
    std::cout << i << std::endl;
    d = d + i;
    i = d * i;
    std::cout << i << std::endl;
    std::cout << d << std::endl;
    print_square(1.234);
}
