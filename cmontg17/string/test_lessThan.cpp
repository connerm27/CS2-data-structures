#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{

String str("d");
String str2("dog");

std::cout << str << " < " << str2 << std::endl;

assert(str < str2);

}

{

String str("Colleg");
String str2("College");

std::cout << str << " < " << str2 << std::endl;

assert(str < str2);


}

String str("Kent");
String str2("Kent State");

std::cout << str << " < " << str2 << std::endl;

assert((str < str2));

std::cout << "Done testing less than constructor" << std::endl; 


}









