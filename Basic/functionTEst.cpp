#include <iostream>
using namespace std;

int power(int num);

int power(int num){
  return num*num;
}

int main()
{
  int i=10;
  cout <<power(i)<<endl;
  cin.get();

  return 0;
}
