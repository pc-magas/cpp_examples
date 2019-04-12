/**
 * Intialization methods in C++11.
 * 
 * Build example using `g++` on GNU/Linux with:
 * ```
 * g++ -std=c++11 ./Variables/cpp11_auto_type_initialization.cpp
 * ```
 */

#include<iostream>
#include <typeinfo>

int main(){

    int foo = 1;
    // auto auto-declared the type of the variable fighter
    auto fighter=foo;
    decltype(foo) bar=3;  // the same as: int bar; 
    std::cout << typeid(bar).name() << std::endl;
    std::cout << typeid(fighter).name() << std::endl;
    //Can't do this once declared type cannot be changed
    // fighter=harem;

    return 1;
}