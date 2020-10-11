#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

{

String str("hello");


String copy(str);


std::cout << str << " == " << copy << std::endl << std::endl;


}

{

String str("Test This");


String copy(str);


std::cout << str << " == " << copy << std::endl << std::endl;


}

{

String str("Z");


String copy(str);


std::cout << str << " == " << copy << std::endl << std::endl;


}


std::cout << "Done Testing Copy Constructor" << std::endl;



}
