#include <iostream> 

using namespace std; 

struct MyStruct 
{ int i = 0; std::string s; };

auto [u, v] = {ms}; 

MyStruct getStruct() 
{ return MyStruct{42, "h3llo"}; }

auto[id,val] = getStruct();

if (id > 30)
{ std::cout << val; } 
for (const auto& elem : mymap) { std::cout << elem.first << elem.second << '\n' };
