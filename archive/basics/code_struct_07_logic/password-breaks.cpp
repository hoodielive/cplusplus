#include <iostream> 
#include <string> 

using namespace std; 

int main()
{
  string password; 

  cout << "Enter your password: "; 

  cin >> password; 

  while ( password != "xyzzy" )
  {
    cout << "Wrong password--try again: "; 
    cin >> password; 
  }
}
