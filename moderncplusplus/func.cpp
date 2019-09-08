#include <iostream> 

using namespace std; 

// Declares a function 
int DemoConsoleOutput(); 

int main() 
{
    // invokes function DemoConsoleOutput 
    DemoConsoleOutput();

    return 0;
}

int DemoConsoleOutput()
{
    cout << "This is a simple string literal" << endl; 
    cout << "Writing number five: " << 5 << endl; 
    cout << "Performing division 10/5 = " << 10 / 5 << endl;
    cout << "Pi when approxiamate is 22 / 7 = " <<  22 / 7 << endl; 
    cout << "Pi is 22 / 7  = " << 22.0 << endl; 

    return 0; 
}