#include <iostream>
#include <string>

using namespace std; 

int main() 
{
    int A = 5; 
    int B = 4; 
    int C = 5; 
    int D = 0; 

    string Tor[] = {"False", "True"}; 

    cout << "A == C is " << Tor[A==C] << endl; 
    cout << "B == D is " << Tor[B==D] << endl; 
    cout << "(B > D) " << Tor[B > D] << endl; 
    cout << "A == C &&  (B > D) " << Tor[(A == C) && (B > D)] << endl; 
    cout << "(A == C) || (B == D)" << Tor[(A == C) || (B == D)] << endl; 
    cout<<"A < B is " << Tor[A<B] << endl;
    cout<<"(A < B) is " << Tor[!(A<B)] << endl;
    cout<<"A == C is " << Tor[A==C] << endl;
    cout<<"(A == C) is " << Tor[!(A==C)] << endl;    
    
    return 0; 
}