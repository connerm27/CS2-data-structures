#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {


{

String str('a');

assert(str == "a");

}

{

String str(' ');

assert(str == ' ');


}

std::cout << "Running 2 tests..." << std::endl;
std::cout << "Done testing char constructor." << std::endl; 


}









