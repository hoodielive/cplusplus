#include <iostream> 
#include <math.h> 

using namespace std; 


int main() 
{
  int a,b,c; 
  float root1, root2; 

  cout <<  "Enter 3 values: " << endl;
  cin >> a >> b >> c; 
  root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  cout << "Root1 is " << root1 << endl; 
  cout << "Root2 is " << root2 << endl; 
  return 0; 
}
