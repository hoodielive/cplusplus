#include <iostream> 
#include <string> 

using namespace std; 

int main()
{
  string password; 

  cout << "Enter your password: " << endl; 
  getline( cin, password, '\n' ); 

  if (password == "xyzzy") 
  {
    cout << "Access granted." << endl;  
  } 
  else 
  { 
    cout << "You have entered a wrong password!" << endl;  
  }
  return 0; 
}
