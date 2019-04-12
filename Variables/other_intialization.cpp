/**
 * Build example using g++ on GNU/Linux with:
 * g++ -stc=c++11 ./Variables/other_intialization.cpp
 */

#include<iostream>

int main (){
    // C Like Initialization
    int a = 1;
    // Class Like Initialization
    int b(2);
    // Curly Braces Initialization
    int c{3};

    int result = a+b+c;

    std::cout<<a<<"+"<<b<<"+"<<c<<"="<<result<<std::endl;
    return 1;
}