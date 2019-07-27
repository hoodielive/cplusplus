#include "main.hpp"

int main()
{
    int FTemp; 
    int CTemp; 

    cout << "Enter a farenheit temp: "; 
    getline(cin, FTemp); 
    stingstream(FTemp) >> FTemp; 
    CTemp = FTemp - 32 / (9/5); 
    cout << "\n" << FTemp << " in Farenheit = " <<
    CTemp << "in Celsius" << endl; 

    return 0
}