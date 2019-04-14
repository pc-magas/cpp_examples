/**
 * Constant Misuse it wont even compile
 */
#include <iostream>

int doubleInt(const int num);

int doubleInt(const int num){
 // The line whete that causes non-compilation
 num=num*2;
 return num;
}

int main(){
    std::cout<<doubleInt(2)<<std::endl;
    return 1;
}