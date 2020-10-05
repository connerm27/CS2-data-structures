#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

std::cout << "Running 2 tests..." << std::endl;
{

String str('a');
std::cout << str << std::endl;
assert(str == "a");

}

{

String str(' ');
std::cout << str << std::endl;
assert(str == ' ');


}

std::cout << "Done testing char constructor." << std::endl; 


}









