#include <iostream>
using namespace std;

int main()
{
  int x; // A normal integer
  int *p; // A pointer to an integer
  p = &x; // Read it, "assign the address of x to p"
  cout<<"Please enter a number"<<endl;
  cin>> x; // Put a value in x, we could also use *p here
  cin.ignore();
  cout<< "Tne number " << *p <<" is stored in " << p << " memory address " <<endl; // Note the use of the * to get the value
  cin.get();

  return 0;
}
