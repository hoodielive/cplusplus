#include <iostream>
#include <complex>
#include <vector>

constexpr double square(double x)
{
    return x * x;
}

bool accept()
{
    bool answer = 0;
    std::cout << "Please enter for yes or no\n";
    std::cin >> answer;

    //return reinterpret_cast<const char *>(answer) == "y";
    if (answer == 'y') return true;
    return false;
};

bool accept2()
{
    std::cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    std::cin >> answer;

    switch(answer)
    {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout << "I'll take that for a no.\n";
            return false;
    }
};

bool accept3()
{
    int tries = 1;
    while (tries < 4)
    {
        std::cout << "Do you want to proceed (y or n)?\n";
        char answer = 0;
        std::cin >> answer;

        switch(answer)
        {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                std::cout << "Sorry, I don't understand that.\n";
                ++tries;  // increment
        }
    }
    std::cout << "I'll take that as a no.\n";
    return false;
};

void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    // lets copy v1
    for (auto i = 0; i!=10; ++i)
        v2[i] = v1[i];

    std::cout << v2 << std::endl;
    std::cout << v2[3] << std::endl;
};

int main() {
    double d1 {2.3};
    std::complex<double> z = 1;
    std::vector<int> v {1,2,3,4,5,6};
    const int dmv = 17;
    constexpr double max1 = 1.4 * square(dmv);
    auto ch = 'x';

    char t[6]; // array of 6 characters [] "array of" | arrays must have a constant expression
    t[3] = 65;
    char* p = &t[3];  // pointer to character * "pointer to"  | prefix unary means 'contents of' & means "address of"
    char x = *p;

    std::cout << max1 << std::endl;
    std::cout << d1 << std::endl;
    std::cout << ch << std::endl;
    std::cout << v[1] << std::endl;
    std::cout << z << std::endl;

    std::cout << "p points to: " << p << std::endl;
    std::cout << "x points to: " << x << std::endl;

    copy_fct();
}