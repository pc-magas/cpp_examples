#include <cstdarg>
#include <iostream>
#include<vector>

std::vector<int> dividedByTwoElements(int num,...);

int main(){

  std::vector<int> divByTwo=dividedByTwoElements(2,1234,5,6,3,7,9,999,1000,12);
  std::vector<int>::const_iterator i;

  for(i=divByTwo.begin(); i!=divByTwo.end(); ++i) {
    std::cout<<(*i)<<std::endl;
  }

}

std::vector<int> dividedByTwoElements(int num,...){

  std::va_list arguments;
  std::vector<int> numbers;
  va_start(arguments,num);

  for(int i=0;i<num;i++) {
    int num=va_arg ( arguments, int );
    if(num%2==0) {
      numbers.push_back(num);
    }
  }
  va_end ( arguments );
  return numbers;
}
