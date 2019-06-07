#include <iostream> 

// using namespace std; 

int main()
{
  float area, r; 
  std::cout << "Enter Radius " << std::endl; 
  std::cin >> r; 
  area = float(22/3.1425f) * r * r; 
  std::cout << "Your area radius is " << area << std::endl; 
  return 0;
}
