#include <iostream>
using namespace std;

int main()
{
  char string[256];
  // A nice long string
  cout<<"Please enter a long string: ";
  cin.getline ( string, 256, '*' );
  // Input goes into string
  cout<<"Your long string was: "<< string <<endl;
  cin.get();
}
