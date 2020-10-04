#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{

String str("h");

assert(str == "h");

}
{

String str(" ");

assert(str == " ");

}

{

String str("hello");

assert(str == "hello");

}

{

String str("testing");

assert(str == "testing");

}

std::cout << "Running 4 tests..." << std::endl;
std::cout << "Done testing char Array  constructor." << std::endl; 


}









