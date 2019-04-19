#include <iostream>

using namespace std; 

int main()
{
  string str;

  cout << "May I know your name sweet girlie?\n";

  getline(cin, str);

  cin >> str;

  cout << "Hello " << str;

  return 0;
}
