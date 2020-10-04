// Test cases for default constructor

#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {


String str;

assert(str == '\0');

std::cout << "Running 1 test..." << std::endl;
std::cout << "Done testing default constructor." << std::endl;


}
