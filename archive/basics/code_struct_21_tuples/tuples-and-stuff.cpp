#include <iostream> 
#include <tuple> 

int main() 
{
    auto first = make_tuple(10,  'A'); 

    const int maxN = 1e9; 
    const int maxL = 15; 

    auto second = make_tuple(maxN, maxL)

    cout << get<0>(first)<< " " << get<1>(first) << "\n"; 
    cout << get<0>(second)<< " " << get<1>(second) << "\n"; 

    return 0;

}