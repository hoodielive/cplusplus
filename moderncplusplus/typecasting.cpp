#include <iostream> 

int main() 
{
    // casting can backfire! 
    int i1 = 3; 
    double d1 = 2.2; 
    int d2 = i1; 
    int i5 = static_cast<int>(d1); 
    std::cout << "This is the d1= " << d1 << std::endl;
    std::cout << "This is the i5 cast scenario: " << i5 << std::endl; 

    return 0;
}