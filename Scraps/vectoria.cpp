#include <iostream>
#include <vector>

int main() 
{
  vector<int> g1; 

  for (int i = 1; i <= 5; i++)
    g1.push_back(i); 

  std::cout << "Output of begin and end: "; 
  for (auto i = g1.begin(); i != g1.end(); ++i)
    std::cout << *i << " "; 

  std::cout << "\nOutput of cbegin cend: "; 
  for (auto i = g1.cbegin(); i != g1.cend(); ++i)
    std::cout << *i << " "; 

  return 0;
}
