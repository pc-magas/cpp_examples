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
    std::string harem="harem";

    // auto auto-declared the type of the variable fighter
    auto fighter=foo;
    std::cout << typeid(fighter).name() << std::endl;
    
    //Can't do this onece declared type cannot be changed
    fighter=harem;
    std::cout << typeid(fighter).name() << std::endl;

    return 1;
}