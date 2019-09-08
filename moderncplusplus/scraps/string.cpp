#include <iostream> 
#include <string>

using namespace std; 

int main() 
{
    // Declares a variable to store an integer 
    int inputNumber; 

    cout << "Enter an integer: "; 

    // Stores integer given via user input 
    cin >> inputNumber; 

    // The same with text i.e. string data 
    cout << "Enter your name: "; 
    string inputName; 
    cin >> inputName; 

    cout << inputName << " entered " << inputNumber << endl; 
    
    return 0; 
}