#include <iostream>
#include <string>

using namespace std; 

int main()
{
  string username; 
  string password; 
  
  cout << "Enter your username: " << endl; 
  getline( cin, username, '\n'); 

  cout << "Enter your password: " << endl; 
  getline( cin, password, '\n' ); 
  if( username == "root" && password == "xyzzy" )
  {
    cout << "Access granted." << endl; 
  }
  else 
  {
    cout << "The username and password combination is NOT correct!" << endl;  
  }

  return 0; 
}
