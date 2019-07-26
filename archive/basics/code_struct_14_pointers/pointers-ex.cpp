#include <iostream>

int main()
{
  int* p;
  int *q;

  int i = 10;
  p = &i; // address of i assigned to p
  *p = 20;

  std::cout << "Address of i: " << p << std::endl;
  std::cout << "Value of i: " << *p << std::endl;
  
  int* p2 = p; 
  std::cout << "Copy of p in p2: " << p2 << std::endl;
 
  // sometimes we may want to point to a pointer 
  int** r = &p; // pointer to p (assigns address of p)

  std::cout << "Address of p: " << r << std::endl;
  std::cout << "Address of i: " << *r << std::endl;
  std::cout << "Value of i: " << **r << std::endl;

  // One of the main usages of pointers to allocate memory during run-time (so-called dynamic allocation) 
  int* d = new int; // dynamic allocation 

  std::cout << "dynamic allocation: " << d << std::endl; 
  delete d; // release allocated memory
  return 0;
}
