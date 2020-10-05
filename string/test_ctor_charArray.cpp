#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

std::cout << "Running 4 tests..." << std::endl;
{

String str("h");
std::cout << str << std::endl;
assert(str == "h");

}
{

String str(" ");
std::cout << str << std::endl;
assert(str == " ");

}

{

String str("hello");
std::cout << str << std::endl;
assert(str == "hello");

}

{

String str("testing");
std::cout << str << std::endl;
assert(str == "testing");

}

std::cout << "Done testing char Array  constructor." << std::endl; 


}









