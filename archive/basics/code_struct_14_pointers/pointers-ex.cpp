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

  return 0;
}
