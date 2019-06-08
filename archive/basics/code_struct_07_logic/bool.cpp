#include <iostream> 

using namespace std; 

int main()
{
  int x = 20; 
  int is_a_boolean = x == 20; 

  if (is_a_boolean) {
    cout << "This is true !" << endl;  
  } else {
    cout << "What you talkin about Willis? " << endl;  
  }
  return 0; 
}
