#include <iostream> 
#include <sstream> 
#include <string> 

using namespace std; 

int main() 
{
    string stringLength, stringWidth; 
    float length; 
    float width; 
    float area; 

    cout << "Enter the length of your room: "; 

    // get the length of string 
    getline(cin, stringLength); 

    // convert it to a float 
    stringstream(stringLength) >> length; 

    // get the width of string 
    cout << "Enter width: "; 

    getline(cin, stringWidth); 

    // convert to a float 
    stringstream(stringWidth) >> width; 

    area = width * length; 

    cout << "\nThe area of the room is: " << area << endl; 

    return 0;  
}