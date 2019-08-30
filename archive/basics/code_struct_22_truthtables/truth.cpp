/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include <iostream>
#include <string>

using namespace std; 

int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    int A = 0; 
    int B = 1; 
    int C = 0; 
    
    string Tor[] = {"True", "False"}; 
    
    //Use this output format
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    
    cout << "(A && B && C == 0) = " <<  Tor[(A == 0 && B == 1 && C == 0)] <<  endl; 
    
    return 0;
}
