#include <iostream> 

using namespace std; 

int main()
{
  int n; 
  cout << "Enter a number: " << n << endl;
  cin >> n; 
  if (n < 10) {
    cout << "You entered " << n << " and it is less than 10"  << endl; 
  }
  return 0; 
}
