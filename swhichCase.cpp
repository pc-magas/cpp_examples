#include <iostream>
using namespace std;

int main()
{
  char red[8]="\033[0;31m";
  char green[8]="\033[0;32m";
  char yellow[8]="\033[0;33m";
  char no_color[7]="\033[0m";
  char option=0;

  cout<<"Select a color"<<endl;
  cout<<red<<"1) red"<<no_color<<endl;
  cout<<green<<"2) green"<<no_color<<endl;
  cout<<yellow<<"3) yellow"<<no_color<<endl;
}
