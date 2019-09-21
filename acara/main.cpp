#include <iostream>
#include <complex>
#include <vector>
#include "Link.h"

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

    /*
     * This for-statement can be read as:
     * set i to zero; while i is not 10, copy the ith element and
     * increment i; when applied to an int var, the increment operator ++ simply adds 1
     */
    std::cout << v2 << std::endl;
    std::cout << v2[3] << std::endl;
};

void print()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto x : v)
        std::cout << x << '\n';

    for (auto x: {10,21,32,43,54,65})
        std::cout << x << '\n';
};

void print2()
{
    // print() is some bullshit - do this instead..
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto& x: v)
        ++x;
};

void suffixes()
{
    double* pd = nullptr;

   // Link <Record> *lst;
    auto lst = nullptr;
}

int count_x(char* p, char x)
{
    // ok so count the number of occurrences of x in p[]
    // p is assumed to point to a zero-terminated array of char (or to Nothing, nada, zip, nathaniel)

    if (p == nullptr) return 0;
    int count = 0;
    for (; *p!=0; ++p)
        if (*p == x)
            ++count;
    return count;
};

void array_bert()
{

    int example[5]; // created on stack
    example[0] = 2;
    example[4] = 4;

    int* another = new int[5]; // created on heap, delete it with:
    delete[] another;

    std::cout << example << " is the address because its of type pointer" << std::endl;
    std::cout << example[4] << " Only access elements within the bounds of the array" << std::endl;
};

int main() {
    double d1 {2.3};
    std::complex<double> z = 1;
    std::vector<int> v {1,2,3,4,5,6};
    const int dmv = 17;
    constexpr double max1 = 1.4 * square(dmv);
    auto ch = 'x';

    // array of 6 characters [] "array of" | arrays must have a constant expression
    char t[6];
    t[3] = 65;

    // pointer to character * "pointer to"  | prefix unary means 'contents of' & means "address of"
    char* p = &t[3];
    char x = *p;

    std::cout << max1 << std::endl;
    std::cout << d1 << std::endl;
    std::cout << ch << std::endl;
    std::cout << v[1] << std::endl;
    std::cout << z << std::endl;

    std::cout << "p points to: " << p << std::endl;
    std::cout << "x points to: " << x << std::endl;

    copy_fct();
    count_x(t, x);
    array_bert();
}