#include <iostream>
#include <complex>
#include <vector>

constexpr double square(double x)
{
    return x * x;
}

int main() {
    double d1 {2.3};
    std::complex<double> z = 1;
    std::vector<int> v {1,2,3,4,5,6};
    const int dmv = 17;
    constexpr double max1 = 1.4 * square(dmv);
    auto ch = 'x';

    std::cout << max1 << std::endl;
    std::cout << d1 << std::endl;
    std::cout << ch << std::endl;
    std::cout << v[1] << std::endl;
    std::cout << z << std::endl;
}