#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "May I know your name please? "; 
    getline(cin, str); 
    cout << "Hello " << str; 
    return 0;
}