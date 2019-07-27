#include "main.hpp"

int main()
{
    float FTemp; 
    float CTemp; 

    cout << "Enter a farenheit temp: "; 
    cin  >> FTemp; 

    CTemp = (FTemp - 32) / (9.0 / 5.0); 
    
    cout << "\n" << FTemp << " in Farenheit = " <<

    CTemp << "in Celsius" << endl; 

    return 0; 
    
}