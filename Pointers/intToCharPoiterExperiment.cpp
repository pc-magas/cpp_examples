/**
* Experiment to change the first 8 bits of an integer
*/
#include <iostream>
#include <bitset>
using namespace std;

const char RED[8]="\033[0;31m";
const char GREEN[8]="\033[0;32m";
const char YELLOW[8]="\033[0;33m";
const char NO_COLOR[7]="\033[0m";

int main()
{
  unsigned int x,originalNumber; // A normal integer
  unsigned char *p; // A pointer to an integer
  unsigned char lower_byte;
  p = (unsigned char *)&x; // Read it, "assign the address of x to p"
  cout<<"Please enter a number: "<<endl;
  cin>> x; // Put a value in x, we could also use *p here
  cin.ignore();

  originalNumber=x; //Saving the oroginal Value
  lower_byte=*p;
  *p=~*p; //inverting the first byte

  cout<< "Original Number: "<<GREEN<<std::bitset<32>(originalNumber)<<NO_COLOR<<"("<<RED<<originalNumber<<NO_COLOR<<")"<<endl;
  cout<< "Lower Byte Number: "<<GREEN<<std::bitset<32>(lower_byte)<<NO_COLOR<<"("<<RED<<(unsigned int)lower_byte<<NO_COLOR<<")"<<endl;
  cout<< "Modified Number: "<<GREEN<<std::bitset<32>(x)<<NO_COLOR<<"("<<RED<<x<<NO_COLOR<<")"<<endl;
  cin.get();
}
