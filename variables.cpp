#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "HEY, you, I'm alive! Oh,and Hello World!\n";
  cin >> a;
  a*=9;
  if(a>18){
    cout << "A number times 9 bigger 18: " << a << "\n";
  } else {
    cout << "A number tims 9 less that 18: " << a << "\n";
  }
  cin.get();
  return 1;
}
