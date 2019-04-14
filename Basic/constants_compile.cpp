/**
 * Constant corrent usage.
 */
#include <iostream>

int doubleInt(const int num);

int doubleInt(const int num){
 return num*2;
}

int main(){
    std::cout<<doubleInt(2)<<std::endl;
    return 1;
}